# Generated from foreignwindows.pro.

cmake_minimum_required(VERSION 3.14)
project(foreignwindows LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/qnx/foreignwindows")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(foreignwindows
    collector.cpp collector.h
    main.cpp
)
target_link_libraries(foreignwindows PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
    screen
)

install(TARGETS foreignwindows
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
