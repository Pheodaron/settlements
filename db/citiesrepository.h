#ifndef CITIESREPOSITORY_H
#define CITIESREPOSITORY_H

#include <QDebug>
#include <QList>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <entity/city.h>
#include <entity/type.h>

class CitiesRepository {
public:
  CitiesRepository(QString dbPath);

  QList<City> getCities(int population, int limit, int offset, QString text);
  int getCitiesCount(int population, QString text);
  bool addCity(City city);
  void deleteCity(qlonglong cityId);
  void updateCity(City city);
  QList<Type> getTypes();
};

#endif // CITIESREPOSITORY_H
