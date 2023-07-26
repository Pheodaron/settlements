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

  bool fieldsIsValid(); // функция проверки полей

private slots:

  void on_m_acceptButton_clicked();

  void on_m_cancelButton_clicked();

private:
  Ui::EditDialog *ui;
  CitiesTableModel *m_model; // ссылка на табличную модель
  City m_city; // сущность населенного пункта в диалоге
  QMap<int, int> m_typeIds; // мапа соответствия айди типа позиции в комбобоксе
  QMap<QString, int> m_typesTable; // мапа соответствия имен типов айди типов

  QRegExp latRx; // регекс для проверки широты
  QRegExp lonRx; // регекс для проверки долготы
  QRegExp altRx; // регекс для проверки высоты

  bool isEditOp = false; // флаг режима работы
};

#endif // EDITDIALOG_H
