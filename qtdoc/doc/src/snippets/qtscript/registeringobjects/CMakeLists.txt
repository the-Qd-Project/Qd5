# Generated from registeringobjects.pro.

#####################################################################
## registeringobjects Binary:
#####################################################################

qt_add_executable(registeringobjects
    GUI
    SOURCES
        main.cpp
        myobject.cpp myobject.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Script
)
