# Generated from draganddrop.pro.

#####################################################################
## draganddrop Binary:
#####################################################################

qt_add_executable(draganddrop
    GUI
    SOURCES
        dragwidget.cpp dragwidget.h
        main.cpp
        mainwindow.cpp mainwindow.h
    PUBLIC_LIBRARIES
        Qt::Gui
)
