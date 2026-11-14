# Generated from styles.pro.

#####################################################################
## manual_widgets_styles Binary:
#####################################################################

qt_add_manual_test(manual_widgets_styles
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:styles.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_widgets_styles)
    set_target_properties(manual_widgets_styles PROPERTIES OUTPUT_NAME "styles")
endif()
