cmake_minimum_required(VERSION 3.11)

project(settlements LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt5 COMPONENTS Widgets Sql REQUIRED)
find_package(Qt5 COMPONENTS Widgets Sql REQUIRED)

set(SOURCES
        main.cpp
        mainwindow.cpp
        db/citiesrepository.cpp
        entity/city.cpp
        model/citiestablemodel.cpp
        dialog/adddialog.cpp
        dialog/editdialog.cpp
        entity/type.cpp
)

set(HEADERS
        mainwindow.h
        db/citiesrepository.h
        entity/city.h
        model/citiestablemodel.h
        populationfilter.h
        dialog/adddialog.h
        dialog/editdialog.h
        entity/type.h
)

set(FORMS
        mainwindow.ui
        dialog/adddialog.ui
        dialog/editdialog.ui
)

add_executable(settlements
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
)

target_link_libraries(settlements PRIVATE Qt5::Widgets Qt5::Sql)
