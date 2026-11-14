# Generated from tableview-span-navigation.pro.

#####################################################################
## tableview-span-navigation Binary:
#####################################################################

qt_add_manual_test(tableview-span-navigation
    GUI
    SOURCES
        main.cpp
    INCLUDE_DIRECTORIES
        .
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:tableview-span-navigation.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_widgets_itemviews_tableview_span_navigation)
    set_target_properties(manual_widgets_itemviews_tableview_span_navigation PROPERTIES OUTPUT_NAME "tableview")
endif()
