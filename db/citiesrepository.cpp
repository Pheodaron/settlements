#include "citiesrepository.h"

CitiesRepository::CitiesRepository(QString dbPath) {
  auto db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName(dbPath);
  if (db.open()) {
    qWarning() << "success!";
  } else {
    qWarning() << "error";
  }
}

QList<City> CitiesRepository::getCities(int population, int limit, int offset,
                                        QString text) {
  QList<City> result;
  QSqlQuery query;
  query.prepare(
      R"(
        SELECT id, parent_id, type, prefix, name, name_eng, map_point, lat, lon,
        alt, population, description, country
        FROM cities WHERE population >= :population
        AND (
            prefix LIKE :text OR name LIKE :text OR map_point LIKE :text
            OR population LIKE :text OR country LIKE :text OR lat LIKE :text
            OR lon LIKE :text OR description LIKE :text)
        ORDER BY name LIMIT :limit OFFSET :offset
      )"); // TODO: объединить в одну строку и поиск вхождений в ней
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
  query.prepare(
      R"(
        SELECT count(*)
        FROM cities
        WHERE population >= :population AND (
          prefix LIKE :text OR name LIKE :text
          OR map_point LIKE :text OR population LIKE :text OR country LIKE :text
          OR lat LIKE :text OR lon LIKE :text OR description LIKE :text)
      )");
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

bool CitiesRepository::addCity(City city) {
  QSqlQuery query;
  query.prepare(
      R"(
        INSERT INTO cities (prefix, parent_id, name, map_point, lat, lon,
        description, population, name_eng, type)
        VALUES (:prefix, 0, :name, :map_point, :lat, :lon, :description,
        :population, :name_eng, :type)
      )");
  query.bindValue(":prefix", city.m_prefix);
  query.bindValue(":name", city.m_name);
  query.bindValue(":map_point", city.m_map_point);
  query.bindValue(":lat", city.m_lat);
  query.bindValue(":lon", city.m_lon);
  query.bindValue(":description", city.m_description);
  query.bindValue(":population", city.m_population);
  query.bindValue(":name_eng", city.m_name_eng);
  query.bindValue(":type", city.m_type);

  if (query.exec()) {
    return true;
  } else {
    qWarning() << "Error while exec query:" << query.lastError().text();
    return false;
  }
}

QList<Type> CitiesRepository::getTypes() {
  QList<Type> result;
  QSqlQuery query("SELECT * FROM types");

  if (query.exec()) {
    while (query.next()) {
      result.append(Type(query));
    }
  } else {
    qWarning() << "Error while exec query:" << query.lastError().text();
  }

  return result;
}

void CitiesRepository::deleteCity(qlonglong cityId) {
  QSqlQuery query;
  query.prepare("DELETE FROM cities WHERE id = :id");
  query.bindValue(":id", cityId);

  if (!query.exec()) {
    qWarning() << "Error while exec query:" << query.lastError().text();
  }
}

void CitiesRepository::updateCity(City city) {
  QSqlQuery query;
  query.prepare(
      R"(
        UPDATE cities SET parent_id = :parent_id, type = :type,
        prefix = :prefix, name = :name, name_eng = :name_eng,
        map_point = :map_point, lat = :lat, lon = :lon, alt = :alt,
        population = :population, description = :description,
        country = :country
        WHERE id = :id
      )");
  query.bindValue(":parent_id", 0);
  query.bindValue(":type", city.m_type);
  query.bindValue(":prefix", city.m_prefix);
  query.bindValue(":name", city.m_name);
  query.bindValue(":name_eng", city.m_name_eng);
  query.bindValue(":map_point", city.m_map_point);
  query.bindValue(":lat", city.m_lat);
  query.bindValue(":lon", city.m_lon);
  query.bindValue(":alt", city.m_alt); // TODO: long problem
  query.bindValue(":population", city.m_population);
  query.bindValue(":description", city.m_description);
  query.bindValue(":country", city.m_country);
  query.bindValue(":id", static_cast<qlonglong>(city.m_id));

  if (!query.exec()) {
    qWarning() << "Error while exec query:" << query.lastError().text();
  }
}
