# Generated from sequential.pro.

#####################################################################
## sequential Binary:
#####################################################################

qt_add_executable(sequential
    GUI
    SOURCES
        main.cpp
        tracer.cpp tracer.h
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(icons_resource_files
    "icons/left.png"
    "icons/right.png"
)

qt_add_resource(sequential "icons"
    PREFIX
        "/"
    FILES
        ${icons_resource_files}
)

