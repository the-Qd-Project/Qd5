# Generated from xembed-widgets.pro.

#####################################################################
## manual_xembed_widgets Binary:
#####################################################################

qt_add_manual_test(manual_xembed_widgets
    GUI
    SOURCES
        main.cpp
        window.cpp window.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:xembed-widgets.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_xembed_widgets)
    set_target_properties(manual_xembed_widgets PROPERTIES OUTPUT_NAME "lineedits")
endif()
