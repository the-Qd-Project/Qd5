# Generated from qtquick2.pro.

#####################################################################
## qtquick2plugin Plugin:
#####################################################################

qt_add_qml_module(qtquick2plugin
    TARGET_PATH "QtQuick.2"
    URI "QtQuick"
    VERSION "2.${CMAKE_PROJECT_VERSION_MINOR}"
    DESIGNER_SUPPORTED
    CLASSNAME QtQuick2Plugin
    DEPENDENCIES
        QtQml/2.15
    SKIP_TYPE_REGISTRATION
    SOURCES
        plugin.cpp
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
        Qt::QmlModelsPrivate
        Qt::QmlPrivate
        Qt::QuickPrivate
)

#### Keys ignored in scope 1:.:.:qtquick2.pro:<TRUE>:
# CXX_MODULE = "qml"
# IMPORT_VERSION = "2.$$QT_MINOR_VERSION"
# TARGETPATH = "QtQuick.2"

## Scopes:
#####################################################################

qt_extend_target(qtquick2plugin CONDITION QT_FEATURE_qml_worker_script
    PUBLIC_LIBRARIES
        Qt::QmlWorkerScriptPrivate
)
