# Generated from qml-i18n.pro.

cmake_minimum_required(VERSION 3.14)
project(qml-i18n LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/qml/qml-i18n")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(qml-i18n
    main.cpp
)
target_link_libraries(qml-i18n PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(qml-i18n_resource_files
    "qml-i18n.qml"
)

qt5_add_resources(qml-i18n "qml-i18n"
    PREFIX
        "/"
    FILES
        ${qml-i18n_resource_files}
)

install(TARGETS qml-i18n
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
