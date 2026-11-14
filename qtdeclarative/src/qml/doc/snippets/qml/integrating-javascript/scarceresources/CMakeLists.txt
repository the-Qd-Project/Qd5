# Generated from scarceresources.pro.

#####################################################################
## scarceresources Binary:
#####################################################################

qt_add_executable(scarceresources
    GUI
    SOURCES
        avatarExample.cpp avatarExample.h
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Qml
)

# Resources:
set(qmake_immediate_resource_files
    "exampleFive.qml"
    "exampleFour.js"
    "exampleFour.qml"
    "exampleOne.qml"
    "exampleThree.js"
    "exampleThree.qml"
    "exampleTwo.qml"
)

qt_add_resource(scarceresources "qmake_immediate"
    PREFIX
        "/"
    FILES
        ${qmake_immediate_resource_files}
)


#### Keys ignored in scope 1:.:.:scarceresources.pro:<TRUE>:
# QML_IMPORT_MAJOR_VERSION = "1"
# QML_IMPORT_NAME = "Qt.example"

set_target_properties(scarceresources PROPERTIES
    QT_QML_MODULE_INSTALL_QMLTYPES TRUE
    QT_QML_MODULE_VERSION 1.0
    QT_QML_MODULE_URI Qt.example
)

qt5_qml_type_registration(scarceresources)
