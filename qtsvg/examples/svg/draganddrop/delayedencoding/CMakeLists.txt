# Generated from delayedencoding.pro.

cmake_minimum_required(VERSION 3.14)
project(delayedencoding LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/draganddrop/delayedencoding")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Svg)

add_qt_gui_executable(delayedencoding
    main.cpp
    mimedata.cpp mimedata.h
    sourcewidget.cpp sourcewidget.h
)
target_link_libraries(delayedencoding PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Svg
    Qt::Widgets
)


# Resources:
set(delayedencoding_resource_files
    "images/drag.png"
    "images/example.svg"
)

qt5_add_resources(delayedencoding "delayedencoding"
    PREFIX
        "/"
    FILES
        ${delayedencoding_resource_files}
)

install(TARGETS delayedencoding
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
