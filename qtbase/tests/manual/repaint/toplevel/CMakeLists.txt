# Generated from toplevel.pro.

#####################################################################
## manual_repaint_toplevel Binary:
#####################################################################

qt_add_manual_test(manual_repaint_toplevel
    SOURCES
        ../shared/shared.h
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

if(TARGET manual_repaint_toplevel)
    set_target_properties(manual_repaint_toplevel PROPERTIES OUTPUT_NAME "toplevel")
endif()
