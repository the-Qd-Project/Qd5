# Generated from ping.pro.

cmake_minimum_required(VERSION 3.14)
project(ping LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/dbus/pingpong")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS DBus)

add_qt_gui_executable(ping
    ping.cpp
    ping-common.h
)
target_link_libraries(ping PUBLIC
    Qt::Core
    Qt::DBus
)

install(TARGETS ping
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
