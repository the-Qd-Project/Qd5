# Generated from xembed-raster.pro.

#####################################################################
## manual_xembed_raster Binary:
#####################################################################

qt_add_manual_test(manual_xembed_raster
    GUI
    SOURCES
        main.cpp
        rasterwindow.cpp rasterwindow.h
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:xembed-raster.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_xembed_raster)
    set_target_properties(manual_xembed_raster PROPERTIES OUTPUT_NAME "rasterwindow")
endif()
