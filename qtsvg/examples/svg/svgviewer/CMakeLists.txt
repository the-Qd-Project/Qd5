# Generated from svgviewer.pro.

cmake_minimum_required(VERSION 3.14)
project(svgviewer LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/svgviewer")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Svg)

add_executable(svgviewer
    exportdialog.cpp exportdialog.h
    main.cpp
    mainwindow.cpp mainwindow.h
    svgview.cpp svgview.h
)
target_link_libraries(svgviewer PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Svg
    Qt::Widgets
)


# Resources:
set(svgviewer_resource_files
    "files/bubbles.svg"
)

qt5_add_resources(svgviewer "svgviewer"
    PREFIX
        "/"
    FILES
        ${svgviewer_resource_files}
)

if(TARGET Qt::OpenGL)
    target_link_libraries(svgviewer PUBLIC
        Qt::OpenGL
    )
endif()

install(TARGETS svgviewer
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
