# Generated from embeddedsvgviewer.pro.

cmake_minimum_required(VERSION 3.14)
project(embeddedsvgviewer LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/embeddedsvgviewer")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Svg)

add_qt_gui_executable(embeddedsvgviewer
    embeddedsvgviewer.cpp embeddedsvgviewer.h
    main.cpp
)
target_link_libraries(embeddedsvgviewer PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Svg
    Qt::Widgets
)


# Resources:
set(embeddedsvgviewer_resource_files
    "files/default.svg"
    "files/v-slider-handle.svg"
)

qt5_add_resources(embeddedsvgviewer "embeddedsvgviewer"
    PREFIX
        "/"
    FILES
        ${embeddedsvgviewer_resource_files}
)

install(TARGETS embeddedsvgviewer
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
