# Generated from regularexpression.pro.

cmake_minimum_required(VERSION 3.14)
project(regularexpression LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/tools/regularexpression")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(regularexpression
    main.cpp
    regularexpressiondialog.cpp regularexpressiondialog.h
)
target_link_libraries(regularexpression PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(regularexpression_resource_files
    "images/copy.png"
)

qt5_add_resources(regularexpression "regularexpression"
    PREFIX
        "/"
    FILES
        ${regularexpression_resource_files}
)

install(TARGETS regularexpression
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
