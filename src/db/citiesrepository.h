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


// Класс для взаимодействия с базой данных
class CitiesRepository {
public:
  CitiesRepository(QString dbPath);

  // получить все населенные пункты
  QList<City> getCities(int population, int limit, int offset, QString text);
  
  // получить количество населенных пунктов
  int getCitiesCount(int population, QString text);
  
  // сохранить новый населенный пункт
  bool addCity(City city);

  // удалить населенный пункт
  void deleteCity(long long cityId);

  // изменить населенный пункт
  void updateCity(City city);

  // получить типы
  QList<Type> getTypes();
};

#endif // CITIESREPOSITORY_H
