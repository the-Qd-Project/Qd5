# Generated from foreignwindows.pro.

cmake_minimum_required(VERSION 3.14)
project(example_widgets_qnx_foreignwindows LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/qnx/foreignwindows")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(example_widgets_qnx_foreignwindows
    collector.cpp collector.h
    main.cpp
)
target_link_libraries(example_widgets_qnx_foreignwindows PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
    screen
)

install(TARGETS example_widgets_qnx_foreignwindows
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

if(TARGET example_widgets_qnx_foreignwindows)
    set_target_properties(example_widgets_qnx_foreignwindows PROPERTIES OUTPUT_NAME "foreignwindows")
endif()
