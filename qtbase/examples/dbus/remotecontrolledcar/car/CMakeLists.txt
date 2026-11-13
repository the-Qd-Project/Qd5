# Generated from car.pro.

cmake_minimum_required(VERSION 3.14)
project(car LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/dbus/remotecontrolledcar/car")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS DBus)
find_package(Qt5 COMPONENTS Widgets)
set(car_SRCS)

qt5_add_dbus_adaptor(car_SRCS
    car.xml
    car.h
    Car
    car_adaptor
)
add_qt_gui_executable(car
    car.cpp car.h
    main.cpp
    ${car_SRCS}
)
target_link_libraries(car PUBLIC
    Qt::Core
    Qt::DBus
    Qt::Gui
    Qt::Widgets
)

install(TARGETS car
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
