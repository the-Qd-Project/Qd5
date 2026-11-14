# Generated from part2.pro.

cmake_minimum_required(VERSION 3.14)
project(example_widgets_tutorials_addressbook_part2 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/tutorials/addressbook/part2")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(example_widgets_tutorials_addressbook_part2
    addressbook.cpp addressbook.h
    main.cpp
)
target_link_libraries(example_widgets_tutorials_addressbook_part2 PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

install(TARGETS example_widgets_tutorials_addressbook_part2
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

if(TARGET example_widgets_tutorials_addressbook_part2)
    set_target_properties(example_widgets_tutorials_addressbook_part2 PROPERTIES OUTPUT_NAME "part2")
endif()
