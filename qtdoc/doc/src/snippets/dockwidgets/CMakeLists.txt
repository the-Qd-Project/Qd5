# Generated from dockwidgets.pro.

#####################################################################
## dockwidgets Binary:
#####################################################################

qt_add_executable(dockwidgets
    GUI
    SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(dockwidgets_resource_files
    "Resources/modules.html"
    "Resources/qtcore.html"
    "Resources/qtgui.html"
    "Resources/qtnetwork.html"
    "Resources/qtopengl.html"
    "Resources/qtsql.html"
    "Resources/qtxml.html"
    "Resources/titles.txt"
)

qt_add_resource(dockwidgets "dockwidgets"
    PREFIX
        "/"
    FILES
        ${dockwidgets_resource_files}
)

