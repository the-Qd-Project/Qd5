# Generated from desktopservices.pro.

cmake_minimum_required(VERSION 3.14)
project(desktopservices LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/embedded/desktopservices")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(desktopservices
    contenttab.cpp contenttab.h
    desktopwidget.cpp desktopwidget.h
    linktab.cpp linktab.h
    main.cpp
)
target_link_libraries(desktopservices PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(desktopservices_resource_files
    "resources/browser.png"
    "resources/message.png"
    "resources/music.png"
    "resources/photo.png"
)

qt5_add_resources(desktopservices "desktopservices"
    PREFIX
        "/"
    FILES
        ${desktopservices_resource_files}
)

install(TARGETS desktopservices
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
