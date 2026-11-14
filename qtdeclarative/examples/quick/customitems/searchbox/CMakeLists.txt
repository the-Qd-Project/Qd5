# Generated from searchbox.pro.

cmake_minimum_required(VERSION 3.14)
project(searchbox LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/customitems/searchbox")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(searchbox
    main.cpp
)
target_link_libraries(searchbox PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(searchbox_resource_files
    "SearchBox.qml"
    "images/clear.png"
    "images/lineedit-bg-focus.png"
    "images/lineedit-bg.png"
    "main.qml"
)

qt5_add_resources(searchbox "searchbox"
    PREFIX
        "/"
    FILES
        ${searchbox_resource_files}
)

install(TARGETS searchbox
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
