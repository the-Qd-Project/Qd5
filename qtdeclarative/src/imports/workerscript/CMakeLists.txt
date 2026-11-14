# Generated from workerscript.pro.

#####################################################################
## workerscriptplugin Plugin:
#####################################################################

qt_add_qml_module(workerscriptplugin
    TARGET_PATH "QtQml/WorkerScript.2"
    URI "QtQml.WorkerScript"
    VERSION "2.${CMAKE_PROJECT_VERSION_MINOR}"
    CLASSNAME QtQmlWorkerScriptPlugin
    SKIP_TYPE_REGISTRATION
    SOURCES
        plugin.cpp
    PUBLIC_LIBRARIES
        Qt::QmlPrivate
        Qt::QmlWorkerScriptPrivate
)

#### Keys ignored in scope 1:.:.:workerscript.pro:<TRUE>:
# CXX_MODULE = "qml"
# IMPORT_VERSION = "2.$$QT_MINOR_VERSION"
# TARGETPATH = "QtQml/WorkerScript.2"
