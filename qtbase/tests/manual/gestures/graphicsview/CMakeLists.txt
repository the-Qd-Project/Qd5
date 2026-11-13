# Generated from graphicsview.pro.

#####################################################################
## graphicsview Binary:
#####################################################################

qt_add_manual_test(graphicsview
    GUI
    SOURCES
        gestures.cpp gestures.h
        imageitem.cpp imageitem.h
        main.cpp
        mousepangesturerecognizer.cpp mousepangesturerecognizer.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)
