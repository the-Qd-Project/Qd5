# Generated from windowmodality.pro.

#####################################################################
## windowmodality Binary:
#####################################################################

qt_add_manual_test(windowmodality
    GUI
    SOURCES
        dialog.ui
        main.cpp
        widget.ui
    PUBLIC_LIBRARIES
        Qt::Gui
    ENABLE_AUTOGEN_TOOLS
        uic
)

## Scopes:
#####################################################################

qt_extend_target(windowmodality CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::PrintSupport
        Qt::Widgets
)
