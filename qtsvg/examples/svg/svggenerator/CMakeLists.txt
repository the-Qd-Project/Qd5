# Generated from svggenerator.pro.

cmake_minimum_required(VERSION 3.14)
project(svggenerator LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/svggenerator")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Svg)

add_qt_gui_executable(svggenerator
    displaywidget.cpp displaywidget.h
    forms/window.ui
    main.cpp
    window.cpp window.h
)
set_target_properties(svggenerator PROPERTIES
    AUTOUIC_SEARCH_PATHS "${CMAKE_CURRENT_SOURCE_DIR}/forms")
target_include_directories(svggenerator PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(svggenerator PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Svg
    Qt::Widgets
)


# Resources:
set(svggenerator_resource_files
    "resources/shapes.dat"
)

qt5_add_resources(svggenerator "svggenerator"
    PREFIX
        "/"
    FILES
        ${svggenerator_resource_files}
)

install(TARGETS svggenerator
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
