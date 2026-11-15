# Generated from qtablewidget-dnd.pro.

#####################################################################
## qtablewidget-dnd Binary:
#####################################################################

qt_add_executable(qtablewidget-dnd
    GUI
    SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(images_resource_files
    "Images/cubed.png"
    "Images/squared.png"
)

qt_add_resource(qtablewidget-dnd "images"
    PREFIX
        "/"
    FILES
        ${images_resource_files}
)

