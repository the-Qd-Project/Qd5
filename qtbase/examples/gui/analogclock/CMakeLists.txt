# Generated from analogclock.pro.

cmake_minimum_required(VERSION 3.14)
project(gui_analogclock LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/gui/analogclock")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)

add_qt_gui_executable(gui_analogclock
    ../rasterwindow/rasterwindow.cpp ../rasterwindow/rasterwindow.h
    main.cpp
)
target_include_directories(gui_analogclock PUBLIC
    ../rasterwindow
)

target_link_libraries(gui_analogclock PUBLIC
    Qt::Core
    Qt::Gui
)

install(TARGETS gui_analogclock
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

set_target_properties(gui_analogclock PROPERTIES OUTPUT_NAME gui_analogclock)

set_target_properties(gui_analogclock PROPERTIES OUTPUT_NAME analogclock)
