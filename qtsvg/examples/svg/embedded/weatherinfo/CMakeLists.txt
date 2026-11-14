# Generated from weatherinfo.pro.

cmake_minimum_required(VERSION 3.14)
project(weatherinfo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/svg/embedded/weatherinfo")

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Network)
find_package(Qt5 COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Svg)

add_qt_gui_executable(weatherinfo
    weatherinfo.cpp
)
target_link_libraries(weatherinfo PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Network
    Qt::Svg
    Qt::Widgets
)


# Resources:
set(weatherinfo_resource_files
    "icons/weather-few-clouds.svg"
    "icons/weather-fog.svg"
    "icons/weather-haze.svg"
    "icons/weather-icy.svg"
    "icons/weather-overcast.svg"
    "icons/weather-showers.svg"
    "icons/weather-sleet.svg"
    "icons/weather-snow.svg"
    "icons/weather-storm.svg"
    "icons/weather-sunny-very-few-clouds.svg"
    "icons/weather-sunny.svg"
    "icons/weather-thundershower.svg"
)

qt5_add_resources(weatherinfo "weatherinfo"
    PREFIX
        "/"
    FILES
        ${weatherinfo_resource_files}
)

install(TARGETS weatherinfo
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
