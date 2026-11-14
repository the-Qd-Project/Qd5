# Generated from graphicsview.pro.

#####################################################################
## manual_gestures_graphicsview Binary:
#####################################################################

qt_add_manual_test(manual_gestures_graphicsview
    GUI
    SOURCES
        gestures.cpp gestures.h
        imageitem.cpp imageitem.h
        main.cpp
        mousepangesturerecognizer.cpp mousepangesturerecognizer.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

if(TARGET manual_gestures_graphicsview)
    set_target_properties(manual_gestures_graphicsview PROPERTIES OUTPUT_NAME "graphicsview")
endif()
