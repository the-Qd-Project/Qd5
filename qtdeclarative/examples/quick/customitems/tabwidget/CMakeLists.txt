# Generated from tabwidget.pro.

cmake_minimum_required(VERSION 3.14)
project(tabwidget LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/customitems/tabwidget")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(tabwidget
    main.cpp
)
target_link_libraries(tabwidget PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(tabwidget_resource_files
    "TabWidget.qml"
    "doc/images/qml-tabwidget-example.png"
    "doc/images/tab.png"
    "main.qml"
)

qt5_add_resources(tabwidget "tabwidget"
    PREFIX
        "/"
    FILES
        ${tabwidget_resource_files}
)

install(TARGETS tabwidget
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
