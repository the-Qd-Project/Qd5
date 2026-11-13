# Generated from integrity.pro.

#####################################################################
## QIntegrityFbIntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QIntegrityFbIntegrationPlugin
    OUTPUT_NAME integrityfb
    TYPE platforms
    DEFAULT_IF ${QT_QPA_DEFAULT_PLATFORM} MATCHES integrityfb # special case
    SOURCES
        main.cpp
        qintegrityfbintegration.cpp qintegrityfbintegration.h
        qintegrityfbscreen.cpp qintegrityfbscreen.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::EventDispatcherSupportPrivate
        Qt::FbSupportPrivate
        Qt::FontDatabaseSupportPrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::ServiceSupportPrivate
)

#### Keys ignored in scope 1:.:.:integrity.pro:<TRUE>:
# OTHER_FILES = "integrity.json"

## Scopes:
#####################################################################

qt_extend_target(QIntegrityFbIntegrationPlugin CONDITION QT_FEATURE_integrityhid
    SOURCES
        qintegrityhidmanager.cpp qintegrityhidmanager.h
)

#### Keys ignored in scope 3:.:.:integrity.pro:NOT TARGET___equals____ss_QT_DEFAULT_QPA_PLUGIN:
# PLUGIN_EXTENDS = "-"
