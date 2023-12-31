#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QString dbPath, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), m_repo(dbPath),
      m_model(&m_repo, this) {
  ui->setupUi(this);
  ui->m_tableView->setModel(&m_model);

  ui->m_tableView->setSelectionMode(QAbstractItemView::SingleSelection);
  ui->m_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui->m_tableView->horizontalHeader()->setHighlightSections(false);
  ui->m_tableView->horizontalHeader()->setStretchLastSection(true);
  ui->m_tableView->verticalHeader()->hide();
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(
      0, QHeaderView::ResizeToContents);
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(
      1, QHeaderView::Interactive);
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(
      2, QHeaderView::ResizeToContents);
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(
      3, QHeaderView::ResizeToContents);
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(
      4, QHeaderView::Interactive);
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(5,
                                                            QHeaderView::Fixed);
  ui->m_tableView->horizontalHeader()->setSectionResizeMode(6,
                                                            QHeaderView::Fixed);

  ui->m_tableView->setColumnWidth(1, 250);

  ui->m_tableView->setColumnWidth(4, 250);
  ui->m_tableView->setColumnWidth(5, 130);
  ui->m_tableView->setColumnWidth(6, 130);

  ui->m_comboBox->addItem("Население не учитывать.", 0);
  ui->m_comboBox->addItem("Население от 1 тыс. чел.", 1000);
  ui->m_comboBox->addItem("Население от 10 тыс. чел.", 10000);
  ui->m_comboBox->addItem("Население от 25 тыс. чел.", 25000);
  ui->m_comboBox->addItem("Население от 50 тыс. чел.", 50000);
  ui->m_comboBox->addItem("Население от 100 тыс. чел.", 100000);
  ui->m_comboBox->addItem("Население от 250 тыс. чел.", 250000);
  ui->m_comboBox->addItem("Население от 500 тыс. чел.", 500000);
  ui->m_comboBox->addItem("Население от 1 млн. чел.", 1000000);
  ui->m_comboBox->addItem("Население от 2 млн. чел.", 2000000);

  connect(ui->m_comboBox, &QComboBox::currentTextChanged, this, [&] {
    m_model.changePopulationFilter(ui->m_comboBox->currentData().toInt());
  });

  connect(ui->m_findLineEdit, &QLineEdit::textChanged, this,
          [&]() { m_model.changeTextFilter(ui->m_findLineEdit->text()); });
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_m_add_button_clicked() {
  EditDialog dialog(m_repo.getTypes(), &m_model, this);
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
  QItemSelectionModel *select = ui->m_tableView->selectionModel();
  if (select->hasSelection()) {
    QModelIndex index = select->selectedRows().at(0);
    EditDialog dialog(index.row(), m_repo.getTypes(), &m_model, this);
    dialog.exec();
  }
}
