#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <entity/city.h>
#include <limits>
#include <model/citiestablemodel.h>

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog {
  Q_OBJECT

public:
  explicit EditDialog(QList<Type> types, CitiesTableModel *model,
                      QWidget *parent = nullptr);
  explicit EditDialog(int row, QList<Type> types, CitiesTableModel *model,
                      QWidget *parent = nullptr);
  ~EditDialog();

  bool fieldsIsValid();

private slots:

  void on_m_acceptButton_clicked();

  void on_m_cancelButton_clicked();

private:
  Ui::EditDialog *ui;
  CitiesTableModel *m_model;
  City m_city;
  QMap<int, int> m_typeIds;
  QMap<QString, int> m_typesTable;

  QRegExp latRx;
  QRegExp lonRx;
  QRegExp altRx;

  bool isEditOp = false;
};

#endif // EDITDIALOG_H
