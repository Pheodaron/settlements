#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QRegExpValidator>
#include <entity/city.h>
#include <limits>
#include <model/citiestablemodel.h>

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog {
  Q_OBJECT

public:
  explicit AddDialog(QList<Type> types, CitiesTableModel *model,
                     QWidget *parent = nullptr);
  ~AddDialog();

  bool fieldsIsValid();

private slots:
  void on_m_acceptButton_clicked();

  void on_m_cancelButton_clicked();

private:
  Ui::AddDialog *ui;
  CitiesTableModel *m_model;
  QMap<int, int> m_typeIds;
  QMap<QString, int> m_typesTable;

  QRegExp latRx;
  QRegExp lonRx;
  QRegExp altRx;
};

#endif // ADDDIALOG_H
