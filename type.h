#ifndef TYPE_H
#define TYPE_H

#include <QSqlQuery>
#include <QString>
#include <QVariant>

class Type {
public:
  Type(QSqlQuery query);
  Type() = default;

  int m_type_id;
  QString m_type_name;
};

#endif // TYPE_H
