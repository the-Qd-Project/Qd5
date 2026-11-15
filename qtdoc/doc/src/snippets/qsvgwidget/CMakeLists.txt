# Generated from qsvgwidget.pro.

#####################################################################
## qsvgwidget Binary:
#####################################################################

qt_add_executable(qsvgwidget
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Svg
)

# Resources:
set(qsvgwidget_resource_files
    "spheres.svg"
)

qt_add_resource(qsvgwidget "qsvgwidget"
    PREFIX
        "/files"
    FILES
        ${qsvgwidget_resource_files}
)

