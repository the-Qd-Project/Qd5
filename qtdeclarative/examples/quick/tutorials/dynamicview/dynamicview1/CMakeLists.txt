# Generated from dynamicview1.pro.

cmake_minimum_required(VERSION 3.14)
project(dynamicview1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/tutorials/dynamicview/dynamicview1")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(dynamicview1
    main.cpp
)
target_link_libraries(dynamicview1 PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(dynamicview1_resource_files
    "PetsModel.qml"
    "dynamicview.qml"
)

qt5_add_resources(dynamicview1 "dynamicview1"
    PREFIX
        "/"
    FILES
        ${dynamicview1_resource_files}
)

install(TARGETS dynamicview1
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
