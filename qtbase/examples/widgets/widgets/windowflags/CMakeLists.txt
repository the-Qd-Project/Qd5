# Generated from windowflags.pro.

cmake_minimum_required(VERSION 3.14)
project(example_widgets_widgets_windowflags LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/widgets/windowflags")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(example_widgets_widgets_windowflags
    controllerwindow.cpp controllerwindow.h
    main.cpp
    previewwindow.cpp previewwindow.h
)
target_link_libraries(example_widgets_widgets_windowflags PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

install(TARGETS example_widgets_widgets_windowflags
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

if(TARGET example_widgets_widgets_windowflags)
    set_target_properties(example_widgets_widgets_windowflags PROPERTIES OUTPUT_NAME "windowflags")
endif()
