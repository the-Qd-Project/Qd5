# Generated from qtexttableborders.pro.

#####################################################################
## qtexttableborders Binary:
#####################################################################

qt_add_manual_test(qtexttableborders
    GUI
    SOURCES
        main.cpp
        widget.cpp widget.h widget.ui
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::PrintSupport
    ENABLE_AUTOGEN_TOOLS
        uic
)

# Resources:
set(resources_resource_files
    "table-border-test-header.html"
    "table-border-test.html"
)

qt_add_resource(qtexttableborders "resources"
    PREFIX
        "/"
    FILES
        ${resources_resource_files}
)


#### Keys ignored in scope 1:.:.:qtexttableborders.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(qtexttableborders CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::Widgets
)
