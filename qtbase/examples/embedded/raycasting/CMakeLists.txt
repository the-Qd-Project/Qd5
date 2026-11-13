# Generated from raycasting.pro.

cmake_minimum_required(VERSION 3.14)
project(raycasting LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/embedded/raycasting")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(raycasting
    raycasting.cpp
)
target_link_libraries(raycasting PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(raycasting_resource_files
    "textures.png"
)

qt5_add_resources(raycasting "raycasting"
    PREFIX
        "/"
    FILES
        ${raycasting_resource_files}
)

install(TARGETS raycasting
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
