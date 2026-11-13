# Generated from cursors.pro.

#####################################################################
## cursors Binary:
#####################################################################

qt_add_manual_test(cursors
    GUI
    SOURCES
        MainWindow.cpp MainWindow.h MainWindow.ui
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
        idbfs.js
    ENABLE_AUTOGEN_TOOLS
        uic
)
