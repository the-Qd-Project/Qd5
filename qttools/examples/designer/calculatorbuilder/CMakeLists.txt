# Generated from calculatorbuilder.pro.

cmake_minimum_required(VERSION 3.14)
project(calculatorbuilder LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/designer/calculatorbuilder")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS UiTools)

add_qt_gui_executable(calculatorbuilder
    calculatorform.cpp calculatorform.h
    main.cpp
)
target_link_libraries(calculatorbuilder PUBLIC
    Qt::Core
    Qt::Gui
    Qt::UiTools
    Qt::Widgets
)


# Resources:
set(calculatorbuilder_resource_files
    "calculatorform.ui"
)

qt5_add_resources(calculatorbuilder "calculatorbuilder"
    PREFIX
        "/forms"
    FILES
        ${calculatorbuilder_resource_files}
)

install(TARGETS calculatorbuilder
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
