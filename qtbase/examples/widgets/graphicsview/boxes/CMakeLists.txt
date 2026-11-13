# Generated from boxes.pro.

cmake_minimum_required(VERSION 3.14)
project(boxes LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/graphicsview/boxes")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS OpenGL)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(boxes
    3rdparty/fbm.c 3rdparty/fbm.h
    glbuffers.cpp glbuffers.h
    glextensions.cpp glextensions.h
    gltrianglemesh.h
    main.cpp
    qtbox.cpp qtbox.h
    roundedbox.cpp roundedbox.h
    scene.cpp scene.h
    trackball.cpp trackball.h
)
target_link_libraries(boxes PUBLIC
    Qt::Core
    Qt::Gui
    Qt::OpenGL
    Qt::Widgets
)


# Resources:
set(boxes_resource_files
    "basic.fsh"
    "basic.vsh"
    "cubemap_negx.jpg"
    "cubemap_negy.jpg"
    "cubemap_negz.jpg"
    "cubemap_posx.jpg"
    "cubemap_posy.jpg"
    "cubemap_posz.jpg"
    "dotted.fsh"
    "fresnel.fsh"
    "glass.fsh"
    "granite.fsh"
    "marble.fsh"
    "parameters.par"
    "qt-logo.jpg"
    "qt-logo.png"
    "reflection.fsh"
    "refraction.fsh"
    "smiley.png"
    "square.jpg"
    "wood.fsh"
)

qt5_add_resources(boxes "boxes"
    PREFIX
        "/res/boxes"
    FILES
        ${boxes_resource_files}
)

install(TARGETS boxes
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
