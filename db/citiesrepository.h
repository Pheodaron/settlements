#ifndef CITIESREPOSITORY_H
#define CITIESREPOSITORY_H

#include <QDebug>
#include <QList>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <city.h>

class CitiesRepository {
public:
  CitiesRepository();

  QList<City> getCities(int population, int limit, int offset, QString text);
  int getCitiesCount(int population, QString text);
  void setCountry(QList<City> list);
};

#endif // CITIESREPOSITORY_H
