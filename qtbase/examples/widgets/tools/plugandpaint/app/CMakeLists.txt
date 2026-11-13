# Generated from app.pro.

cmake_minimum_required(VERSION 3.14)
project(plugandpaint LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/tools/plugandpaint")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(plugandpaint
    interfaces.h
    main.cpp
    mainwindow.cpp mainwindow.h
    paintarea.cpp paintarea.h
    plugindialog.cpp plugindialog.h
)
target_link_libraries(plugandpaint PUBLIC
    # Remove: L../plugins
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

if(macx-xcode)
    target_link_libraries(plugandpaint PUBLIC
        (
        )
        pnp_basictools$
    )
endif()

if(ANDROID AND NOT macx-xcode)
    target_link_libraries(plugandpaint PUBLIC
        pnp_basictools_${CMAKE_SYSTEM_PROCESSOR}
    )
endif()

if(NOT ANDROID AND NOT macx-xcode)
    target_link_libraries(plugandpaint PUBLIC
        pnp_basictools
    )
endif()



install(TARGETS plugandpaint
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
