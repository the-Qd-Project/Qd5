# Generated from openwf.pro.

#####################################################################
## QOpenWFDIntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QOpenWFDIntegrationPlugin
    OUTPUT_NAME qopenwf
    TYPE platforms
    DEFAULT_IF ${QT_QPA_DEFAULT_PLATFORM} MATCHES openwfd # special case
    SOURCES
        main.cpp
        qopenwfdbackingstore.cpp qopenwfdbackingstore.h
        qopenwfddevice.cpp qopenwfddevice.h
        qopenwfdevent.cpp qopenwfdevent.h
        qopenwfdglcontext.cpp qopenwfdglcontext.h
        qopenwfdintegration.cpp qopenwfdintegration.h
        qopenwfdnativeinterface.cpp qopenwfdnativeinterface.h
        qopenwfdoutputbuffer.cpp qopenwfdoutputbuffer.h
        qopenwfdport.cpp qopenwfdport.h
        qopenwfdportmode.cpp qopenwfdportmode.h
        qopenwfdscreen.cpp qopenwfdscreen.h
        qopenwfdwindow.cpp qopenwfdwindow.h
    PUBLIC_LIBRARIES
        EGL::EGL
        GLESv2::GLESv2
        Qt::Core
        Qt::CorePrivate
        Qt::EventDispatcherSupportPrivate
        Qt::FontDatabaseSupportPrivate
        Qt::Gui
        Qt::GuiPrivate
        WFD
        gbm::gbm
)

## Scopes:
#####################################################################

#### Keys ignored in scope 2:.:.:openwf.pro:NOT TARGET___equals____ss_QT_DEFAULT_QPA_PLUGIN:
# PLUGIN_EXTENDS = "-"
