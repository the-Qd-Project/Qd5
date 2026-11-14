# Generated from rasterwindow.pro.

cmake_minimum_required(VERSION 3.14)
project(example_gui_rasterwindow LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/gui/rasterwindow")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)

add_qt_gui_executable(example_gui_rasterwindow
    main.cpp
    rasterwindow.cpp rasterwindow.h
)
target_include_directories(example_gui_rasterwindow PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(example_gui_rasterwindow PUBLIC
    Qt::Core
    Qt::Gui
)

install(TARGETS example_gui_rasterwindow
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

if(TARGET example_gui_rasterwindow)
    set_target_properties(example_gui_rasterwindow PROPERTIES OUTPUT_NAME "rasterwindow")
endif()
