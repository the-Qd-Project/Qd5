# Generated from mainwindow.pro.

#####################################################################
## manual_repaint_mainwindow Binary:
#####################################################################

qt_add_manual_test(manual_repaint_mainwindow
    GUI
    SOURCES
        ../shared/shared.h
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

if(TARGET manual_repaint_mainwindow)
    set_target_properties(manual_repaint_mainwindow PROPERTIES OUTPUT_NAME "mainwindow")
endif()
