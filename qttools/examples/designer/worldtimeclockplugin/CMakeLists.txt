# Generated from worldtimeclockplugin.pro.

cmake_minimum_required(VERSION 3.14)
project(worldtimeclockplugin LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS UiPlugin)

add_qt_gui_executable(worldtimeclockplugin
    worldtimeclock.cpp worldtimeclock.h
    worldtimeclockplugin.cpp worldtimeclockplugin.h
)
target_link_libraries(worldtimeclockplugin PUBLIC
    Qt::Core
    Qt::Gui
    Qt::UiPlugin
    Qt::Widgets
)

install(TARGETS worldtimeclockplugin
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
