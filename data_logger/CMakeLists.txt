cmake_minimum_required(VERSION 2.8)

project(IoTLogger)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(${PROJECT_NAME} "main.cpp" "DB_local.cpp" "DB_local.h"
"DB_remota.cpp" "DB_remota.h" "Muestra.cpp" "Muestra.h" "Posicion.cpp"
"Posicion.h" "Seguidor_app.cpp" "Seguidor_app.h")

target_link_libraries (${PROJECT_NAME} sqlite3 mysqlclient Qt5::Core )

add_executable(${PROJECT_NAME}_gui "main_gui.cpp" "DB_local.cpp" "DB_local.h"
"Muestra.cpp" "Muestra.h" "Posicion.cpp"
"Posicion.h" "mainwindow.h" "mainwindow.cpp" "mainwindow.ui")

target_link_libraries (${PROJECT_NAME}_gui sqlite3 Qt5::Core Qt5::Widgets )
