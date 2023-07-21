#include "city.h"

City::City(QSqlQuery query) {
  m_id = query.value(0).toLongLong();
  m_parent_id = query.value(1).toInt();
  m_type = query.value(2).toString();
  m_prefix = query.value(3).toString();
  m_name = query.value(4).toString();
  m_name_eng = query.value(5).toString();
  m_map_point = query.value(6).toString();
  m_lat = query.value(7).toDouble();
  m_lon = query.value(8).toDouble();
  m_alt = query.value(9).toDouble();
  m_population = query.value(10).toInt();
  m_description = query.value(11).toString();
  m_country = query.value(12).toString();
}
