# Generated from bsdkeyboard.pro.

#####################################################################
## QBsdKeyboardPlugin Plugin:
#####################################################################

qt_add_plugin(QBsdKeyboardPlugin
    OUTPUT_NAME qbsdkeyboardplugin
    TYPE generic
    SOURCES
        main.cpp
        qbsdkeyboard.cpp qbsdkeyboard.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
        Qt::GuiPrivate
)

#### Keys ignored in scope 1:.:.:bsdkeyboard.pro:<TRUE>:
# OTHER_FILES = "qbsdkeyboard.json"
# PLUGIN_EXTENDS = "-"
