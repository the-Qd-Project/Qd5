# Generated from stylesheet.pro.

#####################################################################
## stylesheet Binary:
#####################################################################

qt_add_manual_test(stylesheet
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

qt_add_resource(stylesheet "res"
    PREFIX
        "/"
    FILES
        ${res_resource_files}
)


#### Keys ignored in scope 1:.:.:stylesheet.pro:<TRUE>:
# TEMPLATE = "app"
