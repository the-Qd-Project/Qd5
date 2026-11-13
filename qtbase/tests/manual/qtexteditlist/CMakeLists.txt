# Generated from qtexteditlist.pro.

#####################################################################
## qtexteditlist Binary:
#####################################################################

qt_add_manual_test(qtexteditlist
    GUI
    SOURCES
        main.cpp
        widget.cpp widget.h widget.ui
    PUBLIC_LIBRARIES
        Qt::Gui
    ENABLE_AUTOGEN_TOOLS
        uic
)

#### Keys ignored in scope 1:.:.:qtexteditlist.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(qtexteditlist CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::Widgets
)
