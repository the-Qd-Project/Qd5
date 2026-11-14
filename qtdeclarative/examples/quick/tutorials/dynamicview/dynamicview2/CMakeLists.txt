# Generated from dynamicview2.pro.

cmake_minimum_required(VERSION 3.14)
project(dynamicview2 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/tutorials/dynamicview/dynamicview2")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(dynamicview2
    main.cpp
)
target_link_libraries(dynamicview2 PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(dynamicview2_resource_files
    "PetsModel.qml"
    "dynamicview.qml"
)

qt5_add_resources(dynamicview2 "dynamicview2"
    PREFIX
        "/"
    FILES
        ${dynamicview2_resource_files}
)

install(TARGETS dynamicview2
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
