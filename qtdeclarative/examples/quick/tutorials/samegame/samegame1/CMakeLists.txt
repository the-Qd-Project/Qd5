# Generated from samegame1.pro.

cmake_minimum_required(VERSION 3.14)
project(samegame1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/quick/tutorials/samegame/samegame1")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Quick)
find_package(Qt5 COMPONENTS Qml)

add_qt_gui_executable(samegame1
    main.cpp
)
target_link_libraries(samegame1 PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)


# Resources:
set(samegame1_resource_files
    "Block.qml"
    "Button.qml"
    "samegame.qml"
)

qt5_add_resources(samegame1 "samegame1"
    PREFIX
        "/"
    FILES
        ${samegame1_resource_files}
)
set_source_files_properties("../shared/pics/background.jpg"
    PROPERTIES QT_RESOURCE_ALIAS "background.jpg"
)
set_source_files_properties("../shared/pics/blueStar.png"
    PROPERTIES QT_RESOURCE_ALIAS "blueStar.png"
)
set_source_files_properties("../shared/pics/blueStone.png"
    PROPERTIES QT_RESOURCE_ALIAS "blueStone.png"
)
set_source_files_properties("../shared/pics/greenStar.png"
    PROPERTIES QT_RESOURCE_ALIAS "greenStar.png"
)
set_source_files_properties("../shared/pics/greenStone.png"
    PROPERTIES QT_RESOURCE_ALIAS "greenStone.png"
)
set_source_files_properties("../shared/pics/redStar.png"
    PROPERTIES QT_RESOURCE_ALIAS "redStar.png"
)
set_source_files_properties("../shared/pics/redStone.png"
    PROPERTIES QT_RESOURCE_ALIAS "redStone.png"
)
set_source_files_properties("../shared/pics/star.png"
    PROPERTIES QT_RESOURCE_ALIAS "star.png"
)
set_source_files_properties("../shared/pics/yellowStone.png"
    PROPERTIES QT_RESOURCE_ALIAS "yellowStone.png"
)
set(shared_resource_files
    "background.jpg"
    "blueStar.png"
    "blueStone.png"
    "greenStar.png"
    "greenStone.png"
    "redStar.png"
    "redStone.png"
    "star.png"
    "yellowStone.png"
)

qt5_add_resources(samegame1 "shared"
    PREFIX
        "/shared/pics"
    BASE
        "../shared/pics"
    FILES
        ${shared_resource_files}
)

install(TARGETS samegame1
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
