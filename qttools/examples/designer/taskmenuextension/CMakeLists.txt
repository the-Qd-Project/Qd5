# Generated from taskmenuextension.pro.

cmake_minimum_required(VERSION 3.14)
project(taskmenuextension LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Designer)

add_qt_gui_executable(taskmenuextension
    tictactoe.cpp tictactoe.h
    tictactoedialog.cpp tictactoedialog.h
    tictactoeplugin.cpp tictactoeplugin.h
    tictactoetaskmenu.cpp tictactoetaskmenu.h
)
target_link_libraries(taskmenuextension PUBLIC
    Qt::Core
    Qt::Designer
    Qt::Gui
    Qt::Widgets
)

install(TARGETS taskmenuextension
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
