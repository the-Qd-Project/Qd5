# Generated from stylesheet.pro.

#####################################################################
## manual_widgets_widgets_qtabbar_stylesheet Binary:
#####################################################################

qt_add_manual_test(manual_widgets_widgets_qtabbar_stylesheet
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

# Resources:
set(res_resource_files
    "v.ico"
)

qt_add_resource(manual_widgets_widgets_qtabbar_stylesheet "res"
    PREFIX
        "/"
    FILES
        ${res_resource_files}
)


#### Keys ignored in scope 1:.:.:stylesheet.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_widgets_widgets_qtabbar_stylesheet)
    set_target_properties(manual_widgets_widgets_qtabbar_stylesheet PROPERTIES OUTPUT_NAME "stylesheet")
endif()
