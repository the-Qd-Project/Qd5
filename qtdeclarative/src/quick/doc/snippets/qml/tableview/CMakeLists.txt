# Generated from tableview.pro.

#####################################################################
## tableview Binary:
#####################################################################

qt_add_executable(tableview
    GUI
    SOURCES
        cpp-tablemodel.cpp cpp-tablemodel.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Qml
        Qt::Quick
)

# Resources:
set(qmake_immediate_resource_files
    "cpp-tablemodel.qml"
    "qml-tablemodel.qml"
    "reusabledelegate.qml"
    "tableviewwithheader.qml"
    "tableviewwithprovider.qml"
)

qt_add_resource(tableview "qmake_immediate"
    PREFIX
        "/"
    FILES
        ${qmake_immediate_resource_files}
)


#### Keys ignored in scope 1:.:.:tableview.pro:<TRUE>:
# QML_IMPORT_MAJOR_VERSION = "0"
# QML_IMPORT_NAME = "TableModel"
# TEMPLATE = "app"

set_target_properties(tableview PROPERTIES
    QT_QML_MODULE_INSTALL_QMLTYPES TRUE
    QT_QML_MODULE_VERSION 0.0
    QT_QML_MODULE_URI TableModel
)

qt5_qml_type_registration(tableview)
