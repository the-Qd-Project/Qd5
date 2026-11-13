# Generated from bsdfb.pro.

#####################################################################
## QBsdFbIntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QBsdFbIntegrationPlugin
    OUTPUT_NAME qbsdfb
    TYPE platforms
    DEFAULT_IF ${QT_QPA_DEFAULT_PLATFORM} MATCHES bsdfb # special case
    SOURCES
        main.cpp
        qbsdfbintegration.cpp qbsdfbintegration.h
        qbsdfbscreen.cpp qbsdfbscreen.h
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

#### Keys ignored in scope 1:.:.:bsdfb.pro:<TRUE>:
# OTHER_FILES = "bsdfb.json"

## Scopes:
#####################################################################

qt_extend_target(QBsdFbIntegrationPlugin CONDITION TARGET Qt::InputSupportPrivate
    PUBLIC_LIBRARIES
        Qt::InputSupportPrivate
)

#### Keys ignored in scope 3:.:.:bsdfb.pro:NOT TARGET___equals____ss_QT_DEFAULT_QPA_PLUGIN:
# PLUGIN_EXTENDS = "-"
