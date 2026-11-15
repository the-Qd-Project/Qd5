# Generated from quiloader.pro.

#####################################################################
## quiloader Binary:
#####################################################################

qt_add_executable(quiloader
    GUI
    SOURCES
        main.cpp
        mywidget.cpp mywidget.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::UiTools
)

# Resources:
set(mywidget_resource_files
    "myform.ui"
)

qt_add_resource(quiloader "mywidget"
    PREFIX
        "/forms"
    FILES
        ${mywidget_resource_files}
)

