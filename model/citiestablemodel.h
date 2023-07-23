#ifndef CITIESTABLEMODEL_H
#define CITIESTABLEMODEL_H

#include <QAbstractTableModel>
#include <db/citiesrepository.h>
#include <entity/city.h>

class CitiesTableModel : public QAbstractTableModel {
  Q_OBJECT

public:
  explicit CitiesTableModel(CitiesRepository *repo, QObject *parent = nullptr);

  QVariant headerData(int section, Qt::Orientation orientation,
                      int role = Qt::DisplayRole) const override;
  int rowCount(const QModelIndex &parent = QModelIndex()) const override;
  int columnCount(const QModelIndex &parent = QModelIndex()) const override;
  QVariant data(const QModelIndex &index,
                int role = Qt::DisplayRole) const override;

  bool canFetchMore(const QModelIndex &parent) const override;
  void fetchMore(const QModelIndex &parent) override;

  void update();
  void changePopulationFilter(int populationFilter);
  void changeTextFilter(QString text);
  void addCity(City city);
  void removeCity(int row);
  void editCity(City city);
  City getCity(int row) const;

private:
  QList<City> m_data;
  CitiesRepository *m_repo;
  int m_itemsCount;
  int m_currentPopulationFilter = 0;
  QString m_textFind = "";
};

#endif // CITIESTABLEMODEL_H
