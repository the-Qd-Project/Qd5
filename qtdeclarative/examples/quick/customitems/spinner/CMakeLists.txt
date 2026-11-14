# Generated from spinner.pro.

cmake_minimum_required(VERSION 3.14)
project(spinner LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/customitems/spinner")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(spinner
    main.cpp
)
target_link_libraries(spinner PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(spinner_resource_files
    "content/Spinner.qml"
    "content/spinner-bg.png"
    "content/spinner-select.png"
    "main.qml"
)

qt5_add_resources(spinner "spinner"
    PREFIX
        "/"
    FILES
        ${spinner_resource_files}
)

install(TARGETS spinner
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
