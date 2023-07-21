#ifndef CITY_H
#define CITY_H

#include <QSqlQuery>
#include <QString>
#include <QVariant>

class City {
public:
  City(QSqlQuery query);
  City() = default;

  long m_id;
  int m_parent_id;
  QString m_type;
  QString m_prefix;
  QString m_name;
  QString m_name_eng;
  QString m_map_point;
  double m_lat;
  double m_lon;
  double m_alt;
  int m_population;
  QString m_description;
  QString m_country;
};

#endif // CITY_H
