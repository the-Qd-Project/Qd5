# Generated from bsdmouse.pro.

#####################################################################
## QBsdMousePlugin Plugin:
#####################################################################

qt_add_plugin(QBsdMousePlugin
    OUTPUT_NAME qbsdmouseplugin
    TYPE generic
    SOURCES
        main.cpp
        qbsdmouse.cpp qbsdmouse.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
)

#### Keys ignored in scope 1:.:.:bsdmouse.pro:<TRUE>:
# OTHER_FILES = "qbsdmouse.json"
# PLUGIN_EXTENDS = "-"
