# Generated from scrollbar.pro.

cmake_minimum_required(VERSION 3.14)
project(scrollbar LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/customitems/scrollbar")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(scrollbar
    main.cpp
)
target_link_libraries(scrollbar PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(scrollbar_resource_files
    "ScrollBar.qml"
    "main.qml"
    "pics/niagara_falls.jpg"
)

qt5_add_resources(scrollbar "scrollbar"
    PREFIX
        "/"
    FILES
        ${scrollbar_resource_files}
)

install(TARGETS scrollbar
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
