#include "citiestablemodel.h"

CitiesTableModel::CitiesTableModel(CitiesRepository *repo, QObject *parent)
    : QAbstractTableModel(parent), m_repo(repo) {
  update();
}

QVariant CitiesTableModel::headerData(int section, Qt::Orientation orientation,
                                      int role) const {
  if (role == Qt::DisplayRole) {
    if (orientation == Qt::Horizontal) {
      switch (section) {
      case 0:
        return QString("Префикс");
      case 1:
        return QString("Название");
      case 2:
        return QString("Точка привязки");
      case 3:
        return QString("Население тыс. чел.");
      case 4:
        return QString("Страна");
      case 5:
        return QString("Широта");
      case 6:
        return QString("Долгота");
      case 7:
        return QString("Описание");
      }
    }
  }
  return QVariant();
}

int CitiesTableModel::rowCount(const QModelIndex &parent) const {
  return m_data.count();
}

int CitiesTableModel::columnCount(const QModelIndex &parent) const { return 8; }

QVariant CitiesTableModel::data(const QModelIndex &index, int role) const {
  QVariant variant;
  City row = m_data.at(index.row());
  const int column = index.column();
  if (role == Qt::DisplayRole || role == Qt::EditRole) {
    switch (column) {
    case 0: {
      variant = row.m_prefix;
      break;
    }
    case 1: {
      variant = row.m_name;
      break;
    }
    case 2: {
      variant = row.m_map_point;
      break;
    }
    case 3: {
      if (role == Qt::DisplayRole)
        variant = row.m_population / 1000;
      if (role == Qt::EditRole)
        variant = row.m_population;
      break;
    }
    case 4: {
      variant = row.m_country;
      break;
    }
    case 5: {
      variant = QString::number(row.m_lat, 'g', 6);
      break;
    }
    case 6: {
      variant = QString::number(row.m_lon, 'g', 6);
      break;
    }
    case 7: {
      variant = row.m_description;
      break;
    }
    }
  }
  return variant;
}

void CitiesTableModel::addCity(City city) {
  m_repo->addCity(city);
  update();
}

void CitiesTableModel::changePopulationFilter(int populationFilter) {
  m_currentPopulationFilter = populationFilter;
  m_itemsCount = m_repo->getCitiesCount(m_currentPopulationFilter, m_textFind);
  update();
}

void CitiesTableModel::changeTextFilter(QString text) {
  m_textFind = text;
  update();
}

void CitiesTableModel::update() {
  m_itemsCount = m_repo->getCitiesCount(m_currentPopulationFilter, m_textFind);
  beginResetModel();
  m_data.clear();
  m_data = m_repo->getCities(m_currentPopulationFilter, 100, m_data.count(),
                             m_textFind);
  endResetModel();
}

bool CitiesTableModel::canFetchMore(const QModelIndex &parent) const {
  return (m_itemsCount > m_data.count());
}

void CitiesTableModel::fetchMore(const QModelIndex &parent) {
  int batchSize = 100;
  const int start = m_data.count();
  const int remainder = m_itemsCount - start;
  const int itemsToFetch = qMin(batchSize, remainder);
  if (itemsToFetch <= 0)
    return;
  beginInsertRows(QModelIndex(), start, start + itemsToFetch - 1);
  m_itemsCount = m_repo->getCitiesCount(m_currentPopulationFilter, m_textFind);
  m_data.append(m_repo->getCities(m_currentPopulationFilter, itemsToFetch,
                                  m_data.count(), m_textFind));
  endInsertRows();
}

void CitiesTableModel::removeCity(int row) {
  long long cityId = m_data[row].m_id;
  m_repo->deleteCity(cityId);
  update();
}

void CitiesTableModel::editCity(City city) {
  m_repo->updateCity(city);
  update();
}

City CitiesTableModel::getCity(int row) const { return m_data[row]; }
