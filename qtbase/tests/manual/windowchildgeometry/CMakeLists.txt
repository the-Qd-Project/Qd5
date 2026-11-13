# Generated from windowchildgeometry.pro.

#####################################################################
## windowchildgeometry Binary:
#####################################################################

qt_add_manual_test(windowchildgeometry
    GUI
    SOURCES
        ../windowflags/controls.cpp ../windowflags/controls.h
        controllerwidget.cpp controllerwidget.h
        main.cpp
    DEFINES
        QT_DISABLE_DEPRECATED_BEFORE=0
    INCLUDE_DIRECTORIES
        ../windowflags
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:windowchildgeometry.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(windowchildgeometry CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::Widgets
)
