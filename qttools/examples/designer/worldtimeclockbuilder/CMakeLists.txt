# Generated from worldtimeclockbuilder.pro.

cmake_minimum_required(VERSION 3.14)
project(worldtimeclockbuilder LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/designer/worldtimeclockbuilder")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS UiTools)

add_qt_gui_executable(worldtimeclockbuilder
    main.cpp
)
target_link_libraries(worldtimeclockbuilder PUBLIC
    Qt::Core
    Qt::Gui
    Qt::UiTools
    Qt::Widgets
)


# Resources:
set(worldtimeclockbuilder_resource_files
    "form.ui"
)

qt5_add_resources(worldtimeclockbuilder "worldtimeclockbuilder"
    PREFIX
        "/forms"
    FILES
        ${worldtimeclockbuilder_resource_files}
)

install(TARGETS worldtimeclockbuilder
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
