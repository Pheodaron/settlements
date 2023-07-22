#include "editdialog.h"
#include "ui_editdialog.h"

EditDialog::EditDialog(int row, QList<Type> types, CitiesTableModel *model,
                       QWidget *parent)
    : QDialog(parent), ui(new Ui::EditDialog), m_model(model),
      m_city(m_model->getCity(row)), latRx("^-?\\d{1,2}(\\.\\d{1,6})?$"),
      lonRx("^-?\\d{1,3}(\\.\\d{1,6})?$"), altRx("^-?\\d{1,}(\\.\\d{1,})?$") {
  ui->setupUi(this);

  for (Type &item : types) {
    ui->m_typeComboBox->addItem(item.m_type_name);
    m_typesTable.insert(item.m_type_name, item.m_type_id);
    m_typeIds.insert(ui->m_typeComboBox->count() - 1, item.m_type_id);
  }

  QIntValidator *intValidator =
      new QIntValidator(0, std::numeric_limits<int>::max(), this);
  ui->m_populationLineEdit->setValidator(intValidator);
  ui->m_latLineEdit->setValidator(new QRegExpValidator(latRx, this));
  ui->m_lonLineEdit->setValidator(new QRegExpValidator(lonRx, this));
  ui->m_lonLineEdit->setValidator(new QRegExpValidator(altRx, this));
  ui->m_altLineEdit->setValidator(new QDoubleValidator(this));

  QRegExp re("\\d*");
  if (re.exactMatch(m_city.m_type) && !m_city.m_type.isEmpty()) {
    ui->m_typeComboBox->setCurrentIndex(m_typeIds[m_city.m_type.toInt()]);
  } else {
    ui->m_typeComboBox->setCurrentText(m_city.m_type);
  }

  ui->m_prefixLineEdit->setText(m_city.m_prefix);
  ui->m_nameLineEdit->setText(m_city.m_name);
  ui->m_nameEngLineEdit->setText(m_city.m_name_eng);
  ui->m_mapPointLineEdit->setText(m_city.m_map_point);
  ui->m_populationLineEdit->setText(QString::number(m_city.m_population));
  ui->m_countryLineEdit->setText(m_city.m_country);
  ui->m_latLineEdit->setText(QString::number(m_city.m_lat));
  ui->m_lonLineEdit->setText(QString::number(m_city.m_lon));
  ui->m_descriptionLineEdit->setText(m_city.m_description);
}

EditDialog::~EditDialog() { delete ui; }

void EditDialog::on_m_acceptButton_clicked() {
  if (fieldsIsValid()) {
    QString typeValue = ui->m_typeComboBox->currentText();
    if (m_typesTable.contains(typeValue)) {
      m_city.m_type = QString::number(m_typesTable.value(typeValue));
    } else {
      m_city.m_type = typeValue;
    }

    m_city.m_parent_id = 0;
    m_city.m_name = ui->m_nameLineEdit->text();
    m_city.m_name_eng = ui->m_nameEngLineEdit->text();
    m_city.m_map_point = ui->m_mapPointLineEdit->text();
    m_city.m_country = ui->m_countryLineEdit->text();
    m_city.m_lat = ui->m_latLineEdit->text().toDouble();
    m_city.m_lon = ui->m_lonLineEdit->text().toDouble();
    m_city.m_alt = ui->m_altLineEdit->text().toDouble();
    m_city.m_description = ui->m_descriptionLineEdit->text();
    m_city.m_population = ui->m_populationLineEdit->text().toInt();

    m_model->editCity(m_city);
    close();
  } else {
    QMessageBox::warning(this, "Предупреждение",
                         "Присутствуют некорректные поля", QMessageBox::Ok);
  }
}

void EditDialog::on_m_cancelButton_clicked() { close(); }

bool EditDialog::fieldsIsValid() {
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
