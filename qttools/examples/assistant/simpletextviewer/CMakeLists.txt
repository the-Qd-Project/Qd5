# Generated from simpletextviewer.pro.

cmake_minimum_required(VERSION 3.14)
project(simpletextviewer LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/assistant/simpletextviewer")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(simpletextviewer
    assistant.cpp assistant.h
    findfiledialog.cpp findfiledialog.h
    main.cpp
    mainwindow.cpp mainwindow.h
    textedit.cpp textedit.h
)
target_compile_definitions(simpletextviewer PUBLIC
    SRCDIR=\\\"${CMAKE_CURRENT_SOURCE_DIR}/\\\"
)

target_link_libraries(simpletextviewer PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

install(TARGETS simpletextviewer
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
