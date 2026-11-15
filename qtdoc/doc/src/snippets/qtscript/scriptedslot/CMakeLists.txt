# Generated from scriptedslot.pro.

#####################################################################
## scriptedslot Binary:
#####################################################################

qt_add_executable(scriptedslot
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Script
)

# Resources:
set(scriptedslot_resource_files
    "object.js"
)

qt_add_resource(scriptedslot "scriptedslot"
    PREFIX
        "/"
    FILES
        ${scriptedslot_resource_files}
)

