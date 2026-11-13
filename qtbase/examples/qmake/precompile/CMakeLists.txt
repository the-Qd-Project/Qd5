# Generated from precompile.pro.

cmake_minimum_required(VERSION 3.14)
project(precompile LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_executable(precompile
    main.cpp
    mydialog.cpp mydialog.h mydialog.ui
    myobject.cpp myobject.h
    stable.h
    util.cpp
)
target_link_libraries(precompile PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

install(TARGETS precompile
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
