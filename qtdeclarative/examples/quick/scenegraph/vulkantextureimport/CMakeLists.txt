# Generated from vulkantextureimport.pro.

cmake_minimum_required(VERSION 3.14)
project(vulkantextureimport LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/scenegraph/vulkantextureimport")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Qml)
find_package(Qt5 COMPONENTS Quick)

add_qt_gui_executable(vulkantextureimport
    main.cpp
    vulkantextureimport.cpp vulkantextureimport.h
)
target_link_libraries(vulkantextureimport PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(vulkantextureimport_resource_files
    "main.qml"
    "squircle.frag.spv"
    "squircle.vert.spv"
)

qt5_add_resources(vulkantextureimport "vulkantextureimport"
    PREFIX
        "/scenegraph/vulkantextureimport"
    FILES
        ${vulkantextureimport_resource_files}
)

install(TARGETS vulkantextureimport
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

set_target_properties(vulkantextureimport PROPERTIES
    QT_QML_MODULE_INSTALL_QMLTYPES TRUE
    QT_QML_MODULE_VERSION 1.0
    QT_QML_MODULE_URI VulkanTextureImport
)

qt5_qml_type_registration(vulkantextureimport)
