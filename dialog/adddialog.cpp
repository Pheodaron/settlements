#include "dialog/adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QList<Type> types, CitiesTableModel *model,
                     QWidget *parent)
    : QDialog(parent), ui(new Ui::AddDialog), m_model(model),
      latRx("^-?\\d{1,2}(\\.\\d{1,6})?$"), lonRx("^-?\\d{1,3}(\\.\\d{1,6})?$"),
      altRx("^-?\\d{1,}(\\.\\d{1,})?$") {
  ui->setupUi(this);
  for (Type &item : types) {
    ui->m_typeComboBox->addItem(item.m_type_name, item.m_type_id);
    m_typesTable.insert(item.m_type_name, item.m_type_id);
    m_typeIds.insert(ui->m_typeComboBox->count() - 1, item.m_type_id);
  }
  ui->m_typeComboBox->setCurrentText("");

  QIntValidator *intValidator =
      new QIntValidator(0, std::numeric_limits<int>::max(), this);
  ui->m_populationLineEdit->setValidator(intValidator);
  ui->m_latLineEdit->setValidator(new QRegExpValidator(latRx, this));
  ui->m_lonLineEdit->setValidator(new QRegExpValidator(lonRx, this));
  ui->m_lonLineEdit->setValidator(new QRegExpValidator(altRx, this));
  ui->m_altLineEdit->setValidator(new QDoubleValidator(this));

  ui->m_populationLineEdit->setText("0");
  ui->m_latLineEdit->setText("0.0");
  ui->m_lonLineEdit->setText("0.0");
  ui->m_altLineEdit->setText("0.0");
}

AddDialog::~AddDialog() { delete ui; }

void AddDialog::on_m_acceptButton_clicked() {
  if (fieldsIsValid()) {
    City city;

    QString typeValue = ui->m_typeComboBox->currentText();
    if (m_typesTable.contains(typeValue)) {
      city.m_type = QString::number(m_typesTable.value(typeValue));
    } else {
      city.m_type = typeValue;
    }

    city.m_parent_id = 0;
    city.m_name = ui->m_nameLineEdit->text();
    city.m_name_eng = ui->m_nameEngLineEdit->text();
    city.m_map_point = ui->m_mapPointLineEdit->text();
    city.m_country = ui->m_countryLineEdit->text();
    city.m_lat = ui->m_latLineEdit->text().toDouble();
    city.m_lon = ui->m_lonLineEdit->text().toDouble();
    city.m_alt = ui->m_altLineEdit->text().toDouble();
    city.m_description = ui->m_descriptionLineEdit->text();
    city.m_population = ui->m_populationLineEdit->text().toInt();

    m_model->addCity(city);
    close();
  }
}

void AddDialog::on_m_cancelButton_clicked() { close(); }

bool AddDialog::fieldsIsValid() {
  QStringList incorrectFields;
  QString latString = ui->m_latLineEdit->text();
  QString lonString = ui->m_lonLineEdit->text();
  QString altString = ui->m_lonLineEdit->text();

  double lat = latString.toDouble();
  double lon = lonString.toDouble();

  if (lat < -90.0 || lat > 90.0 || !latRx.exactMatch(latString)) {
    incorrectFields.append("Широта");
  }
  if (lon < -180.0 || lon > 180.0 || !lonRx.exactMatch(lonString)) {
    incorrectFields.append("Долгота");
  }
  if (!altRx.exactMatch(altString)) {
    incorrectFields.append("Высота");
  }
  if (incorrectFields.count()) {
    QMessageBox::warning(this, "Предупреждение",
                         "Присутствуют некорректные поля: " +
                             incorrectFields.join(", "),
                         QMessageBox::Ok);
    return false;
  } else {
    return true;
  }
}
