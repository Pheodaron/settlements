#include "citiesrepository.h"

CitiesRepository::CitiesRepository() {
  auto db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("/home/astra/stc/settlements/cities.db3");
  if (db.open()) {
    qDebug() << "success!";
  } else {
    qDebug() << "error";
  }
}

QList<City> CitiesRepository::getCities(int population, int limit, int offset,
                                        QString text) {
  QList<City> result;
  QSqlQuery query;
  //  query.prepare("SELECT id, parent_id, type, prefix, name, name_eng, "
  //                "map_point, lat, lon, alt, population, description, country
  //                " "FROM cities WHERE population >= ? LIMIT ? OFFSET ? and
  //                (id LIKE '%?%' or parent_id LIKE '%?%' or type LIKE '%?%' or
  //                prefix LIKE '%?%' or name LIKE '%?%')");
  query.prepare(
      "SELECT id, parent_id, type, prefix, name, name_eng, "
      "map_point, lat, lon, alt, population, description, country "
      "FROM cities WHERE population >= :population and (prefix LIKE :text or name LIKE :text or map_point LIKE :text or population LIKE :text or country LIKE :text or lat LIKE :text or lon LIKE :text or description LIKE :text) ORDER BY name LIMIT :limit OFFSET :offset");
  query.bindValue(":population", population);
  query.bindValue(":text", QString("%%1%").arg(text));
  query.bindValue(":limit", limit);
  query.bindValue(":offset", offset);

  if (query.exec()) {
    while (query.next()) {
      result.append(City(query));
    }
  } else {
    qWarning() << "Error while exec query:" << query.lastError().text();
  }

  return result;
}

int CitiesRepository::getCitiesCount(int population, QString text) {
  int result = 0;
  QSqlQuery query;
  query.prepare("SELECT count(*) FROM cities WHERE population >= :population and (prefix LIKE :text or name LIKE :text or map_point LIKE :text or population LIKE :text or country LIKE :text or lat LIKE :text or lon LIKE :text or description LIKE :text)");
  query.bindValue(":population", population);
  query.bindValue(":text", QString("%%1%").arg(text));
  if (query.exec()) {
    if (query.first()) {
      result = query.value(0).toInt();
    }
  } else {
    qWarning() << "Error while exec query:" << query.lastError().text();
  }

  return result;
}
