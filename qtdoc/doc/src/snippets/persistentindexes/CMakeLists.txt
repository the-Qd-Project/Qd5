# Generated from persistentindexes.pro.

#####################################################################
## persistentindexes Binary:
#####################################################################

qt_add_executable(persistentindexes
    GUI
    SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h
        model.cpp model.h
    PUBLIC_LIBRARIES
        Qt::Gui
)
