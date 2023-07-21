#include "dialog/adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QList<Type> types, CitiesTableModel *model,
                     QWidget *parent)
    : QDialog(parent), ui(new Ui::AddDialog), m_model(model) {
  ui->setupUi(this);
  for (Type &item : types) {
    ui->m_typeComboBox->addItem(item.m_type_name, item.m_type_id);
  }

  QIntValidator *intValidator =
      new QIntValidator(0, std::numeric_limits<int>::max(), this);
  QDoubleValidator *doubleValidator = new QDoubleValidator(this);
  ui->m_populationLineEdit->setValidator(intValidator);
  ui->m_latLineEdit->setValidator(doubleValidator);
  ui->m_lonLineEdit->setValidator(doubleValidator);

  ui->m_populationLineEdit->setText("0");
  ui->m_latLineEdit->setText("0.0");
  ui->m_lonLineEdit->setText("0.0");
}

AddDialog::~AddDialog() { delete ui; }

void AddDialog::on_m_acceptButton_clicked() {
  if (fieldsIsValid()) {
    City city;
    city.m_parent_id = 0;
    city.m_type = ui->m_typeComboBox->currentData().toInt();
    city.m_name = ui->m_nameLineEdit->text();
    city.m_name_eng = ui->m_nameEngLineEdit->text();
    city.m_map_point = ui->m_mapPointLineEdit->text();
    city.m_country = ui->m_countryLineEdit->text();
    city.m_lat = ui->m_latLineEdit->text().toDouble();
    city.m_lon = ui->m_lonLineEdit->text().toDouble();
    city.m_description = ui->m_descriptionLineEdit->text();
    city.m_population = ui->m_populationLineEdit->text().toInt();
    m_model->addCity(city);
    close();
  } else {
    QMessageBox::warning(this, "Предупреждение",
                         "Присутствуют некорректные поля", QMessageBox::Ok);
  }
}

void AddDialog::on_m_cancelButton_clicked() { close(); }

bool AddDialog::fieldsIsValid() {
  double lat = ui->m_latLineEdit->text().toDouble();
  double lon = ui->m_lonLineEdit->text().toDouble();
  if (lat < -90.0 || lat > 90.0 || lon < -180.0 || lon > 180.0)
    return false;
  return true;
}
