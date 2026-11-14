# Generated from multiwindow.pro.

#####################################################################
## manual_rhi_multiwindow Binary:
#####################################################################

qt_add_manual_test(manual_rhi_multiwindow
    GUI
    SOURCES
        multiwindow.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::GuiPrivate
        Qt::Widgets
)

# Resources:
set_source_files_properties("../shared/color.frag.qsb"
    PROPERTIES QT_RESOURCE_ALIAS "color.frag.qsb"
)
set_source_files_properties("../shared/color.vert.qsb"
    PROPERTIES QT_RESOURCE_ALIAS "color.vert.qsb"
)
set(multiwindow_resource_files
    "../shared/color.frag.qsb"
    "../shared/color.vert.qsb"
)

qt_add_resource(manual_rhi_multiwindow "manual_rhi_multiwindow"
    PREFIX
        "/"
    FILES
        ${multiwindow_resource_files}
)


#### Keys ignored in scope 1:.:.:multiwindow.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_rhi_multiwindow)
    set_target_properties(manual_rhi_multiwindow PROPERTIES OUTPUT_NAME "multiwindow")
endif()
