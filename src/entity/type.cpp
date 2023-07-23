#include "type.h"

Type::Type(QSqlQuery query) {
  m_type_id = query.value(0).toInt();
  m_type_name = query.value(1).toString();
}
