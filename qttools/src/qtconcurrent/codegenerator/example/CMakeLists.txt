# Generated from example.pro.

#####################################################################
## example Binary:
#####################################################################

qt_add_executable(example
    GUI
    SOURCES
        ../src/codegenerator.cpp ../src/codegenerator.h
        main.cpp
    INCLUDE_DIRECTORIES
        ../src
    PUBLIC_LIBRARIES
        Qt::Gui
)
