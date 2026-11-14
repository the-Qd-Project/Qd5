# Generated from flipable.pro.

cmake_minimum_required(VERSION 3.14)
project(flipable LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/customitems/flipable")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(flipable
    main.cpp
)
target_link_libraries(flipable PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(flipable_resource_files
    "content/5_heart.png"
    "content/9_club.png"
    "content/Card.qml"
    "content/back.png"
    "flipable.qml"
)

qt5_add_resources(flipable "flipable"
    PREFIX
        "/"
    FILES
        ${flipable_resource_files}
)

install(TARGETS flipable
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
