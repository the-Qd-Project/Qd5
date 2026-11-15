# Generated from separations.pro.

#####################################################################
## separations Binary:
#####################################################################

qt_add_executable(separations
    GUI
    SOURCES
        finalwidget.cpp finalwidget.h
        main.cpp
        screenwidget.cpp screenwidget.h
        viewer.cpp viewer.h
    PUBLIC_LIBRARIES
        Qt::Gui
)
