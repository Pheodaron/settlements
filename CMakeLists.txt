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

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        db/citiesrepository.h
        db/citiesrepository.cpp
        city.h
        city.cpp
        model/citiestablemodel.h
        model/citiestablemodel.cpp
        populationfilter.h
#        populationfilter.cpp
)

add_executable(settlements
    ${PROJECT_SOURCES}
)

target_link_libraries(settlements PRIVATE Qt5::Widgets Qt5::Sql)
