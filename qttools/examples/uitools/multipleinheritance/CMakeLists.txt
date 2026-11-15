# Generated from multipleinheritance.pro.

cmake_minimum_required(VERSION 3.14)
project(multipleinheritance LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/uitools/multipleinheritance")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(multipleinheritance
    calculatorform.cpp calculatorform.h calculatorform.ui
    main.cpp
)
target_link_libraries(multipleinheritance PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

install(TARGETS multipleinheritance
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
