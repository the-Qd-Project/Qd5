# Generated from tableview.pro.

#####################################################################
## manual_repaint_tableview Binary:
#####################################################################

qt_add_manual_test(manual_repaint_tableview
    GUI
    SOURCES
        ../shared/shared.h
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

if(TARGET manual_repaint_tableview)
    set_target_properties(manual_repaint_tableview PROPERTIES OUTPUT_NAME "tableview")
endif()
