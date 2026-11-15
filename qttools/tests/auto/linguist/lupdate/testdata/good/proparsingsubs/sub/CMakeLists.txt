# Generated from sub.pro.

#####################################################################
## sub Binary:
#####################################################################

qt_add_executable(sub
    GUI
    SOURCES
        include/test.h
        src/test.cpp
    INCLUDE_DIRECTORIES
        include
    PUBLIC_LIBRARIES
        Qt::Gui
)
