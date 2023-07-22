#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "Ошибка: не задан путь к бд" << std::endl;
    exit(0);
  }

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

  QString absultePath = file.absoluteFilePath();

  QApplication a(argc, argv);
  MainWindow w(absultePath);
  w.show();
  return a.exec();
}
