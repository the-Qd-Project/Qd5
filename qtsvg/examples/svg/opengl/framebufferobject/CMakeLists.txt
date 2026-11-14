# Generated from framebufferobject.pro.

cmake_minimum_required(VERSION 3.14)
project(framebufferobject LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/opengl/framebufferobject")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS OpenGL)
find_package(Qt5 COMPONENTS Svg)

add_qt_gui_executable(framebufferobject
    glwidget.cpp glwidget.h
    main.cpp
)
target_link_libraries(framebufferobject PUBLIC
    Qt::Core
    Qt::Gui
    Qt::OpenGL
    Qt::Svg
    Qt::Widgets
)


# Resources:
set(framebufferobject_resource_files
    "bubbles.svg"
    "designer.png"
)

qt5_add_resources(framebufferobject "framebufferobject"
    PREFIX
        "/res"
    FILES
        ${framebufferobject_resource_files}
)

install(TARGETS framebufferobject
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
