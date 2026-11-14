# Generated from qtqml.pro.

#####################################################################
## qmlplugin Plugin:
#####################################################################

qt_add_qml_module(qmlplugin
    URI "QtQml"
    VERSION "2.${CMAKE_PROJECT_VERSION_MINOR}"
    CLASSNAME QtQmlPlugin
    DEPENDENCIES
        QtQml.Models/2.15
        QtQml.WorkerScript/2.15
    SKIP_TYPE_REGISTRATION
    SOURCES
        plugin.cpp
    PUBLIC_LIBRARIES
        Qt::QmlModelsPrivate
        Qt::QmlPrivate
)

#### Keys ignored in scope 1:.:.:qtqml.pro:<TRUE>:
# CXX_MODULE = "qml"
# IMPORT_VERSION = "2.$$QT_MINOR_VERSION"
# TARGETPATH = "QtQml"
