# Generated from pixelator.pro.

cmake_minimum_required(VERSION 3.14)
project(pixelator_quick LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/tableview/pixelator")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(pixelator_quick
    imagemodel.cpp imagemodel.h
    main.cpp
)
target_link_libraries(pixelator_quick PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(qmake_immediate_resource_files
    "main.qml"
    "qt.png"
)

qt5_add_resources(pixelator_quick "qmake_immediate"
    PREFIX
        "/"
    FILES
        ${qmake_immediate_resource_files}
)

install(TARGETS pixelator_quick
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

set_target_properties(pixelator_quick PROPERTIES
    QT_QML_MODULE_INSTALL_QMLTYPES TRUE
    QT_QML_MODULE_VERSION 1.0
    QT_QML_MODULE_URI ImageModel
)

qt5_qml_type_registration(pixelator_quick)
