# Generated from dynamicview3.pro.

cmake_minimum_required(VERSION 3.14)
project(dynamicview3 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/tutorials/dynamicview/dynamicview3")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(dynamicview3
    main.cpp
)
target_link_libraries(dynamicview3 PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(dynamicview3_resource_files
    "PetsModel.qml"
    "dynamicview.qml"
)

qt5_add_resources(dynamicview3 "dynamicview3"
    PREFIX
        "/"
    FILES
        ${dynamicview3_resource_files}
)

install(TARGETS dynamicview3
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
