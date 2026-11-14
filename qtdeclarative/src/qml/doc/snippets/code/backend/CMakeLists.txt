# Generated from backend.pro.

#####################################################################
## backend Binary:
#####################################################################

qt_add_executable(backend
    GUI
    SOURCES
        backend.cpp backend.h
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Qml
)

# Resources:
set(qmake_immediate_resource_files
    "main.qml"
)

qt_add_resource(backend "qmake_immediate"
    PREFIX
        "/"
    FILES
        ${qmake_immediate_resource_files}
)


#### Keys ignored in scope 1:.:.:backend.pro:<TRUE>:
# QML_IMPORT_MAJOR_VERSION = "1"
# QML_IMPORT_NAME = "io.qt.examples.backend"

set_target_properties(backend PROPERTIES
    QT_QML_MODULE_INSTALL_QMLTYPES TRUE
    QT_QML_MODULE_VERSION 1.0
    QT_QML_MODULE_URI io.qt.examples.backend
)

qt5_qml_type_registration(backend)
