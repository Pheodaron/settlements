#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <model/citiestablemodel.h>
#include <db/citiesrepository.h>
#include <QScrollBar>
#include <QSortFilterProxyModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//enum class PopulationFilter {
//    NoFilter = 0,
//    MoreThan1Thousand = 1,
//    MoreThan10Thousands = 2,
//    MoreThan25Thousands = 3,
//    MoreThan50Thousands = 4,
//    MoreThan100Thousands = 5,
//    MoreThan250Thousands = 6,
//    MoreThan500Thousands = 7,
//    MoreThan1Million = 8,
//    MoreThan2Millions = 9
//};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CitiesRepository m_repo;
    CitiesTableModel m_model;
    QSortFilterProxyModel *m_proxyModel;
};
#endif // MAINWINDOW_H
