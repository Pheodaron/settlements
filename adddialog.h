#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <city.h>
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
};

#endif // ADDDIALOG_H
