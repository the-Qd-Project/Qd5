# Generated from basictools.pro.

cmake_minimum_required(VERSION 3.14)
project(pnp_basictools LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/tools/plugandpaint/plugins")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_library(pnp_basictools STATIC
    basictoolsplugin.cpp basictoolsplugin.h
)
target_include_directories(pnp_basictools PUBLIC
    ../../app
)

target_link_libraries(pnp_basictools PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

target_compile_definitions(pnp_basictools PRIVATE
    QT_STATICPLUGIN
    QT_PLUGIN
)

install(TARGETS pnp_basictools
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
    ARCHIVE DESTINATION "${INSTALL_EXAMPLEDIR}"
)

# qmake: plugin static; debug builds got a "d" (Windows) / "_debug" (macOS) suffix via LIBS
if(APPLE)
    set_target_properties(pnp_basictools PROPERTIES DEBUG_POSTFIX "_debug")
elseif(WIN32)
    set_target_properties(pnp_basictools PROPERTIES DEBUG_POSTFIX "d")
endif()
