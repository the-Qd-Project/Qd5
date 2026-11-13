# Generated from flightinfo.pro.

cmake_minimum_required(VERSION 3.14)
project(flightinfo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/embedded/flightinfo")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Network)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(flightinfo
    flightinfo.cpp
    form.ui
)
target_link_libraries(flightinfo PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Network
    Qt::Widgets
)


# Resources:
set(flightinfo_resource_files
    "aircraft.png"
)

qt5_add_resources(flightinfo "flightinfo"
    PREFIX
        "/"
    FILES
        ${flightinfo_resource_files}
)

install(TARGETS flightinfo
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
