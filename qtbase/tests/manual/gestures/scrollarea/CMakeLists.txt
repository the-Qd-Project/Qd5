# Generated from scrollarea.pro.

#####################################################################
## manual_gestures_scrollarea Binary:
#####################################################################

qt_add_manual_test(manual_gestures_scrollarea
    GUI
    SOURCES
        main.cpp
        mousepangesturerecognizer.cpp mousepangesturerecognizer.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

if(TARGET manual_gestures_scrollarea)
    set_target_properties(manual_gestures_scrollarea PROPERTIES OUTPUT_NAME "scrollarea")
endif()
