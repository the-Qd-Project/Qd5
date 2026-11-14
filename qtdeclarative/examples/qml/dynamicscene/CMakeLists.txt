# Generated from dynamicscene.pro.

cmake_minimum_required(VERSION 3.14)
project(dynamicscene LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/qml/dynamicscene")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(dynamicscene
    main.cpp
)
target_link_libraries(dynamicscene PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(dynamicscene_resource_files
    "content/Button.qml"
    "content/GenericSceneItem.qml"
    "content/PaletteItem.qml"
    "content/PerspectiveItem.qml"
    "content/Sun.qml"
    "content/images/NOTE"
    "content/images/face-smile.png"
    "content/images/moon.png"
    "content/images/rabbit_brown.png"
    "content/images/rabbit_bw.png"
    "content/images/star.png"
    "content/images/sun.png"
    "content/images/tree_s.png"
    "content/itemCreation.js"
    "dynamicscene.qml"
)

qt5_add_resources(dynamicscene "dynamicscene"
    PREFIX
        "/"
    FILES
        ${dynamicscene_resource_files}
)

install(TARGETS dynamicscene
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
