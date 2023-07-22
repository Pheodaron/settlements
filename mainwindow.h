#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScrollBar>
#include <QSortFilterProxyModel>
#include <db/citiesrepository.h>
#include <dialog/adddialog.h>
#include <dialog/editdialog.h>
#include <model/citiestablemodel.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QString dbPath, QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_m_add_button_clicked();

  void on_m_delete_button_clicked();

  void on_m_edit_button_clicked();

private:
  Ui::MainWindow *ui;
  CitiesRepository m_repo;
  CitiesTableModel m_model;
};
#endif // MAINWINDOW_H
