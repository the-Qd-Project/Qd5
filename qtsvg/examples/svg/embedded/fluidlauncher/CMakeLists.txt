# Generated from fluidlauncher.pro.

cmake_minimum_required(VERSION 3.14)
project(fluidlauncher LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/embedded/fluidlauncher")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_qt_gui_executable(fluidlauncher
    demoapplication.cpp demoapplication.h
    fluidlauncher.cpp fluidlauncher.h
    main.cpp
    pictureflow.cpp pictureflow.h
    slideshow.cpp slideshow.h
)
target_link_libraries(fluidlauncher PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(fluidlauncher_resource_files
    "config.xml"
    "screenshots/anomaly_s60.png"
    "screenshots/concentriccircles.png"
    "screenshots/context2d_s60.png"
    "screenshots/deform.png"
    "screenshots/desktopservices_s60.png"
    "screenshots/digiflip.png"
    "screenshots/elasticnodes.png"
    "screenshots/embeddedsvgviewer.png"
    "screenshots/embeddedsvgviewer_s60.png"
    "screenshots/flickable.png"
    "screenshots/flightinfo_s60.png"
    "screenshots/fridgemagnets_s60.png"
    "screenshots/ftp_s60.png"
    "screenshots/lightmaps.png"
    "screenshots/mediaplayer.png"
    "screenshots/pathstroke.png"
    "screenshots/qmlcalculator.png"
    "screenshots/qmlclocks.png"
    "screenshots/qmldialcontrol.png"
    "screenshots/qmleasing.png"
    "screenshots/qmlflickr.jpg"
    "screenshots/qmlphotoviewer.jpg"
    "screenshots/qmltwitter.jpg"
    "screenshots/raycasting.png"
    "screenshots/saxbookmarks_s60.png"
    "screenshots/softkeys_s60.png"
    "screenshots/spectrum.png"
    "screenshots/styledemo.png"
    "screenshots/styledemo_s60.png"
    "screenshots/weatherinfo.png"
    "screenshots/wiggly.png"
    "screenshots/wiggly_s60.png"
    "slides/demo_1.png"
    "slides/demo_2.png"
    "slides/demo_3.png"
    "slides/demo_4.png"
    "slides/demo_5.png"
    "slides/demo_6.png"
)

qt5_add_resources(fluidlauncher "fluidlauncher"
    PREFIX
        "/fluidlauncher"
    FILES
        ${fluidlauncher_resource_files}
)

install(TARGETS fluidlauncher
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
