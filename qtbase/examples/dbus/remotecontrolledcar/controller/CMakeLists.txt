# Generated from controller.pro.

cmake_minimum_required(VERSION 3.14)
project(controller LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/dbus/remotecontrolledcar/controller")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS DBus)
find_package(Qt5 COMPONENTS Widgets)
set(controller_SRCS)

qt5_add_dbus_interface(controller_SRCS
    car.xml
    car_interface
)
add_qt_gui_executable(controller
    controller.cpp controller.h controller.ui
    main.cpp ${controller_SRCS}
)
target_link_libraries(controller PUBLIC
    Qt::Core
    Qt::DBus
    Qt::Gui
    Qt::Widgets
)

install(TARGETS controller
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
