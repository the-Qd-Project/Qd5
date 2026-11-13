# Generated from chip.pro.

cmake_minimum_required(VERSION 3.14)
project(chip LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/graphicsview/chip")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(chip
    chip.cpp chip.h
    main.cpp
    mainwindow.cpp mainwindow.h
    view.cpp view.h
)
target_link_libraries(chip PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(images_resource_files
    "fileprint.png"
    "qt4logo.png"
    "rotateleft.png"
    "rotateright.png"
    "zoomin.png"
    "zoomout.png"
)

qt5_add_resources(chip "images"
    PREFIX
        "/"
    FILES
        ${images_resource_files}
)

if(TARGET Qt::PrintSupport)
    target_link_libraries(chip PUBLIC
        Qt::PrintSupport
    )
endif()

if(TARGET Qt::OpenGL)
    target_link_libraries(chip PUBLIC
        Qt::OpenGL
    )
endif()

install(TARGETS chip
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
