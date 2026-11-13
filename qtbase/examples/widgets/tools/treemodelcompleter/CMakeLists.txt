# Generated from treemodelcompleter.pro.

cmake_minimum_required(VERSION 3.14)
project(treemodelcompleter LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/tools/treemodelcompleter")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(treemodelcompleter
    main.cpp
    mainwindow.cpp mainwindow.h
    treemodelcompleter.cpp treemodelcompleter.h
)
target_link_libraries(treemodelcompleter PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(treemodelcompleter_resource_files
    "resources/treemodel.txt"
)

qt5_add_resources(treemodelcompleter "treemodelcompleter"
    PREFIX
        "/"
    FILES
        ${treemodelcompleter_resource_files}
)

install(TARGETS treemodelcompleter
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
