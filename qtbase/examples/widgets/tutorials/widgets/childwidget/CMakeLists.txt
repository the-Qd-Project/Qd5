# Generated from childwidget.pro.

cmake_minimum_required(VERSION 3.14)
project(example_widgets_tutorials_widgets_childwidget LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/tutorials/widgets/childwidget")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(example_widgets_tutorials_widgets_childwidget
    main.cpp
)
target_link_libraries(example_widgets_tutorials_widgets_childwidget PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

install(TARGETS example_widgets_tutorials_widgets_childwidget
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

if(TARGET example_widgets_tutorials_widgets_childwidget)
    set_target_properties(example_widgets_tutorials_widgets_childwidget PROPERTIES OUTPUT_NAME "childwidget")
endif()
