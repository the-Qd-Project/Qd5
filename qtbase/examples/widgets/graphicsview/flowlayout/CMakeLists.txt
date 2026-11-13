# Generated from flowlayout.pro.

cmake_minimum_required(VERSION 3.14)
project(graphicsview_flowlayout LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/graphicsview/flowlayout")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(graphicsview_flowlayout
    flowlayout.cpp flowlayout.h
    main.cpp
    window.cpp window.h
)
target_link_libraries(graphicsview_flowlayout PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

install(TARGETS graphicsview_flowlayout
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

set_target_properties(graphicsview_flowlayout PROPERTIES OUTPUT_NAME flowlayout)
