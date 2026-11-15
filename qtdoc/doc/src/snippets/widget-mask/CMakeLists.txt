# Generated from widget-mask.pro.

#####################################################################
## widget-mask Binary:
#####################################################################

qt_add_executable(widget-mask
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(mask_resource_files
    "tux.png"
)

qt_add_resource(widget-mask "mask"
    PREFIX
        "/images"
    FILES
        ${mask_resource_files}
)

