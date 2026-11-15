# Generated from simpleparse.pro.

#####################################################################
## simpleparse Binary:
#####################################################################

qt_add_executable(simpleparse
    GUI
    SOURCES
        handler.cpp handler.h
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Xml
)
