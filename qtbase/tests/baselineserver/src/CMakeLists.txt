# Generated from baselineserver.pro.

#####################################################################
## baselineserver Binary:
#####################################################################

qt_add_executable(baselineserver
    OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/../bin"
    SOURCES
        ../shared/baselineprotocol.cpp ../shared/baselineprotocol.h
        ../shared/lookup3.cpp
        baselineserver.cpp baselineserver.h
        main.cpp
        report.cpp report.h
    DEFINES
        QT_DISABLE_DEPRECATED_BEFORE=0
    INCLUDE_DIRECTORIES
        ../shared
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Network
)

# Resources:
set(baselineserver_resource_files
    "templates/view.html"
)

qt_add_resource(baselineserver "baselineserver"
    PREFIX
        "/"
    FILES
        ${baselineserver_resource_files}
)


#### Keys ignored in scope 1:.:.:baselineserver.pro:<TRUE>:
# TEMPLATE = "app"
