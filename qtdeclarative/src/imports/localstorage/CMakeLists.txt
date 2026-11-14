# Generated from localstorage.pro.

#####################################################################
## qmllocalstorageplugin Plugin:
#####################################################################

qt_add_qml_module(qmllocalstorageplugin
    URI "QtQuick.LocalStorage"
    VERSION "2.${CMAKE_PROJECT_VERSION_MINOR}"
    CLASSNAME QQmlLocalStoragePlugin
    SKIP_TYPE_REGISTRATION
    GENERATE_QMLTYPES
    SOURCES
        plugin.cpp
        qquicklocalstorage.cpp qquicklocalstorage_p.h
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::QmlPrivate
        Qt::Sql
)

#### Keys ignored in scope 1:.:.:localstorage.pro:<TRUE>:
# CXX_MODULE = "qml"
# IMPORT_VERSION = "2.$$QT_MINOR_VERSION"
# OTHER_FILES = "localstorage.json"
# TARGETPATH = "QtQuick/LocalStorage"
