# Generated from remotecontrol.pro.

cmake_minimum_required(VERSION 3.14)
project(remotecontrol LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/assistant/remotecontrol")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(remotecontrol
    main.cpp
    remotecontrol.cpp remotecontrol.h remotecontrol.ui
)
target_link_libraries(remotecontrol PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(remotecontrol_resource_files
    "enter.png"
)

qt5_add_resources(remotecontrol "remotecontrol"
    PREFIX
        "/remotecontrol"
    FILES
        ${remotecontrol_resource_files}
)

install(TARGETS remotecontrol
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
