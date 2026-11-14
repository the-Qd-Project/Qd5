# Generated from qtsvg.pro.

cmake_minimum_required(VERSION 3.15.0)

project(QtSvg
    VERSION 5.16.0
    DESCRIPTION "Qd Svg Libraries"
    HOMEPAGE_URL "https://qd.org.tr/"
    LANGUAGES CXX C
)

find_package(Qt5 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Core Gui Widgets) # special case
find_package(Qt5 ${PROJECT_VERSION} CONFIG OPTIONAL_COMPONENTS Xml) # special case for tests

qt_build_repo()
