# Generated from basicgraphicslayouts.pro.

cmake_minimum_required(VERSION 3.14)
project(basicgraphicslayouts LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/graphicsview/basicgraphicslayouts")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(basicgraphicslayouts
    layoutitem.cpp layoutitem.h
    main.cpp
    window.cpp window.h
)
target_link_libraries(basicgraphicslayouts PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(basicgraphicslayouts_resource_files
    "images/block.png"
)

qt5_add_resources(basicgraphicslayouts "basicgraphicslayouts"
    PREFIX
        "/"
    FILES
        ${basicgraphicslayouts_resource_files}
)

install(TARGETS basicgraphicslayouts
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
