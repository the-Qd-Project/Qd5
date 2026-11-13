# Generated from padnavigator.pro.

cmake_minimum_required(VERSION 3.14)
project(padnavigator LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/graphicsview/padnavigator")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_executable(padnavigator
    flippablepad.cpp flippablepad.h
    form.ui
    main.cpp
    padnavigator.cpp padnavigator.h
    roundrectitem.cpp roundrectitem.h
    splashitem.cpp splashitem.h
)
target_link_libraries(padnavigator PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(padnavigator_resource_files
    "images/artsfftscope.png"
    "images/blue_angle_swirl.jpg"
    "images/kontact_contacts.png"
    "images/kontact_journal.png"
    "images/kontact_mail.png"
    "images/kontact_notes.png"
    "images/kopeteavailable.png"
    "images/metacontact_online.png"
    "images/minitools.png"
)

qt5_add_resources(padnavigator "padnavigator"
    PREFIX
        "/"
    FILES
        ${padnavigator_resource_files}
)

if(TARGET Qt::OpenGL)
    target_link_libraries(padnavigator PUBLIC
        Qt::OpenGL
    )
endif()

install(TARGETS padnavigator
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
