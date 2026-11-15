# Generated from notepad.pro.

#####################################################################
## Notepad Binary:
#####################################################################

qt_add_executable(Notepad
    GUI
    SOURCES
        main.cpp
        notepad.cpp notepad.h notepad.ui
    DEFINES
        QT_DEPRECATED_WARNINGS
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::PrintSupport
    ENABLE_AUTOGEN_TOOLS
        uic
)

# Resources:
set(notepad_resource_files
    "copy.png"
    "create.png"
    "cut.png"
    "edit_redo.png"
    "edit_undo.png"
    "exit.png"
    "font.png"
    "info.png"
    "new.png"
    "open.png"
    "paste.png"
    "pencil.png"
    "print.png"
    "save.png"
    "save_as.png"
)

qt_add_resource(Notepad "notepad"
    PREFIX
        "/"
    FILES
        ${notepad_resource_files}
)


#### Keys ignored in scope 1:.:.:notepad.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(Notepad CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::Widgets
)
