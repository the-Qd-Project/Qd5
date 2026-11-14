# Generated from qtdeclarative.pro.

cmake_minimum_required(VERSION 3.15.0)

project(QtDeclarative
    VERSION 5.16.0
    DESCRIPTION "Qd Declarative Libraries"
    HOMEPAGE_URL "https://qd.org.tr/"
    LANGUAGES CXX C
)

find_package(Qt5 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Core Gui Widgets Network)
find_package(Qt5 ${PROJECT_VERSION} CONFIG OPTIONAL_COMPONENTS OpenGL Sql Concurrent Test)

# special case begin
# export QT6_ADD_QML_MODULE to this project
include(src/qml/Qt5QmlMacros.cmake)
# special case end

qt_build_repo()
