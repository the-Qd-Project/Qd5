# Generated from scrollarea.pro.

#####################################################################
## manual_repaint_scrollarea Binary:
#####################################################################

qt_add_manual_test(manual_repaint_scrollarea
    GUI
    SOURCES
        ../shared/shared.h
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

if(TARGET manual_repaint_scrollarea)
    set_target_properties(manual_repaint_scrollarea PROPERTIES OUTPUT_NAME "scrollarea")
endif()
