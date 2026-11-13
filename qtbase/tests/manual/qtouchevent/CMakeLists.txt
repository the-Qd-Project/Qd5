# Generated from qtouchevent.pro.

#####################################################################
## qtouchevent Binary:
#####################################################################

qt_add_manual_test(qtouchevent
    SOURCES
        form.ui
        main.cpp
        touchwidget.cpp touchwidget.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Test
    ENABLE_AUTOGEN_TOOLS
        uic
)

## Scopes:
#####################################################################

qt_extend_target(qtouchevent CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::Widgets
)
