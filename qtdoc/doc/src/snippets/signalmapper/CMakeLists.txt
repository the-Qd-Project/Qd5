# Generated from signalmapper.pro.

#####################################################################
## signalmapper Binary:
#####################################################################

qt_add_executable(signalmapper
    GUI
    SOURCES
        filereader.cpp filereader.h
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)
