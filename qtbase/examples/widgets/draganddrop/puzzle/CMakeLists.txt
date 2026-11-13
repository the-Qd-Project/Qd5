# Generated from puzzle.pro.

cmake_minimum_required(VERSION 3.14)
project(draganddrop_puzzle LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/draganddrop/puzzle")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(draganddrop_puzzle
    main.cpp
    mainwindow.cpp mainwindow.h
    pieceslist.cpp pieceslist.h
    puzzlewidget.cpp puzzlewidget.h
)
target_link_libraries(draganddrop_puzzle PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(puzzle_resource_files
    "example.jpg"
)

qt5_add_resources(draganddrop_puzzle "puzzle"
    PREFIX
        "/images"
    FILES
        ${puzzle_resource_files}
)

install(TARGETS draganddrop_puzzle
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

set_target_properties(draganddrop_puzzle PROPERTIES OUTPUT_NAME draganddrop_puzzle)

set_target_properties(draganddrop_puzzle PROPERTIES OUTPUT_NAME puzzle)
