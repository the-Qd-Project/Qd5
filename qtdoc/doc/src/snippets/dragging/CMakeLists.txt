# Generated from dragging.pro.

#####################################################################
## dragging Binary:
#####################################################################

qt_add_executable(dragging
    GUI
    SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(images_resource_files
    "images/file.png"
)

qt_add_resource(dragging "images"
    PREFIX
        "/"
    FILES
        ${images_resource_files}
)

