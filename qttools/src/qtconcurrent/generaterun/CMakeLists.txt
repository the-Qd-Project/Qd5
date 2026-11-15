# Generated from run.pro.

#####################################################################
## run Binary:
#####################################################################

qt_add_executable(run
    GUI
    SOURCES
        ../codegenerator/src/codegenerator.cpp ../codegenerator/src/codegenerator.h
        main.cpp
    INCLUDE_DIRECTORIES
        ../codegenerator/src
    PUBLIC_LIBRARIES
        Qt::Gui
)
