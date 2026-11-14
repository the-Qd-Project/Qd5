# Generated from textobject.pro.

cmake_minimum_required(VERSION 3.14)
project(textobject LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/richtext/textobject")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Svg)

add_qt_gui_executable(textobject
    main.cpp
    svgtextobject.cpp svgtextobject.h
    window.cpp window.h
)
target_link_libraries(textobject PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Svg
    Qt::Widgets
)


# Resources:
set(resources_resource_files
    "files/heart.svg"
)

qt5_add_resources(textobject "resources"
    PREFIX
        "/"
    FILES
        ${resources_resource_files}
)

install(TARGETS textobject
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
