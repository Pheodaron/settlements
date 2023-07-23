#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <iostream>

int main(int argc, char *argv[]) {
  QString absolutePath;
  if (argc == 1) {
#ifdef __linux__
    QFileInfo file("/etc/cities.db3");
#elif _WIN32
    QFileInfo file("./cities.db3");
#endif
    if (file.exists()) {
      absolutePath = file.absoluteFilePath();
    } else {
      std::cout << "Ошибка: в текущей директории не найден файл базы по "
                   "умолчанию или не задан путь к бд"
                << std::endl;
      exit(0);
    }
  } else {
    QString path = QString(argv[1]);
    QFileInfo file(path);
    if (!file.exists()) {
      std::cout << "Ошибка: такого файла не существует" << std::endl;
      exit(0);
    }
    QString ext = file.completeSuffix();
    if (!QStringList({"sqlite", "sqlite3", "db", "db3", "s3db", "sl3"})
             .contains(ext)) {
      std::cout << "Ошибка: файл имеет не правильное расширение!" << std::endl;
      exit(0);
    }
    absolutePath = file.absoluteFilePath();
  }

  QApplication a(argc, argv);
  MainWindow w(absolutePath);
  w.show();
  return a.exec();
}
