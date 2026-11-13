# Generated from widgetgrab.pro.

#####################################################################
## widgetgrab Binary:
#####################################################################

qt_add_manual_test(widgetgrab
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:widgetgrab.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(widgetgrab CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::Widgets
)
