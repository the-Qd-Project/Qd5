# Generated from resources.pro.

#####################################################################
## resources Binary:
#####################################################################

qt_add_executable(resources
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Qml
)

# Resources:
set(example_resource_files
    "images/background.png"
    "main.qml"
)

qt_add_resource(resources "example"
    PREFIX
        "/"
    FILES
        ${example_resource_files}
)

