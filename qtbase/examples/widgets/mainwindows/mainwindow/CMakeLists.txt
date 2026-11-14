# Generated from mainwindow.pro.

cmake_minimum_required(VERSION 3.14)
project(example_widgets_mainwindows_mainwindow LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/mainwindows/mainwindow")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(example_widgets_mainwindows_mainwindow
    colorswatch.cpp colorswatch.h
    main.cpp
    mainwindow.cpp mainwindow.h
    toolbar.cpp toolbar.h
)
target_link_libraries(example_widgets_mainwindows_mainwindow PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(mainwindow_resource_files
    "qt.png"
    "titlebarCenter.png"
    "titlebarLeft.png"
    "titlebarRight.png"
)

qt5_add_resources(example_widgets_mainwindows_mainwindow "example_widgets_mainwindows_mainwindow"
    PREFIX
        "/res"
    FILES
        ${mainwindow_resource_files}
)

install(TARGETS example_widgets_mainwindows_mainwindow
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

if(TARGET example_widgets_mainwindows_mainwindow)
    set_target_properties(example_widgets_mainwindows_mainwindow PROPERTIES OUTPUT_NAME "mainwindow")
endif()
