# Generated from parser.pro.

#####################################################################
## parser Binary:
#####################################################################

qt_add_executable(parser
    GUI
    SOURCES
        main.cpp
        parser.cpp parser.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Xml
)
