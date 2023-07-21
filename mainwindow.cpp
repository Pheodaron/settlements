#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), m_model(&m_repo, this) {
  ui->setupUi(this);
  ui->m_tableView->setModel(&m_model);

  ui->m_tableView->setSelectionMode(QAbstractItemView::SingleSelection);
  ui->m_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui->m_tableView->horizontalHeader()->setHighlightSections(false);
  ui->m_tableView->horizontalHeader()->setStretchLastSection(true);
  ui->m_tableView->verticalHeader()->hide();
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);

  ui->m_comboBox->addItem("Население не учитывать.",
                          PopulationFilter::NoFilter);
  ui->m_comboBox->addItem("Население от 1 тыс. чел.",
                          PopulationFilter::MoreThan1Thousand);
  ui->m_comboBox->addItem("Население от 10 тыс. чел.",
                          PopulationFilter::MoreThan10Thousands);
  ui->m_comboBox->addItem("Население от 25 тыс. чел.",
                          PopulationFilter::MoreThan25Thousands);
  ui->m_comboBox->addItem("Население от 50 тыс. чел.",
                          PopulationFilter::MoreThan50Thousands);
  ui->m_comboBox->addItem("Население от 100 тыс. чел.",
                          PopulationFilter::MoreThan100Thousands);
  ui->m_comboBox->addItem("Население от 250 тыс. чел.",
                          PopulationFilter::MoreThan250Thousands);
  ui->m_comboBox->addItem("Население от 500 тыс. чел.",
                          PopulationFilter::MoreThan500Thousands);
  ui->m_comboBox->addItem("Население от 1 млн. чел.",
                          PopulationFilter::MoreThan1Million);
  ui->m_comboBox->addItem("Население от 2 млн. чел.",
                          PopulationFilter::MoreThan2Millions);

  connect(ui->m_comboBox, &QComboBox::currentTextChanged, this, [&] {
    m_model.changePopulationFilter(ui->m_comboBox->currentData().toInt());
  });

  connect(ui->m_findLineEdit, &QLineEdit::textChanged, this,
          [&]() { m_model.changeTextFilter(ui->m_findLineEdit->text()); });
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_m_add_button_clicked() {
  AddDialog dialog(m_repo.getTypes(), &m_model, this);
  dialog.exec();
}

void MainWindow::on_m_delete_button_clicked() {
  QItemSelectionModel *select = ui->m_tableView->selectionModel();
  if (select->hasSelection()) {
    auto dialogResult = QMessageBox::warning(
        this, "Предупреждение", "Вы действительно хотите удалить?",
        QMessageBox::Yes | QMessageBox::No);
    if (dialogResult == QMessageBox::No)
      return;

    QModelIndex index = select->selectedRows().at(0);
    m_model.removeCity(index.row());
  }
}

void MainWindow::on_m_edit_button_clicked() {
  if (m_model.haveEditedCities())
    m_model.saveEditedCities();
}
