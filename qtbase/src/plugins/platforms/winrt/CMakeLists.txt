# Generated from winrt.pro.

#####################################################################
## QWinRTIntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QWinRTIntegrationPlugin
    OUTPUT_NAME qwinrt
    TYPE platforms
    DEFAULT_IF ${QT_QPA_DEFAULT_PLATFORM} MATCHES winrt # special case
    SOURCES
        main.cpp
        qwinrtbackingstore.cpp qwinrtbackingstore.h
        qwinrtcanvas.cpp qwinrtcanvas.h
        qwinrtclipboard.cpp qwinrtclipboard.h
        qwinrtcursor.cpp qwinrtcursor.h
        qwinrteglcontext.cpp qwinrteglcontext.h
        qwinrteventdispatcher.cpp qwinrteventdispatcher.h
        qwinrtfiledialoghelper.cpp qwinrtfiledialoghelper.h
        qwinrtfileengine.cpp qwinrtfileengine.h
        qwinrtinputcontext.cpp qwinrtinputcontext.h
        qwinrtintegration.cpp qwinrtintegration.h
        qwinrtmessagedialoghelper.cpp qwinrtmessagedialoghelper.h
        qwinrtscreen.cpp qwinrtscreen.h
        qwinrtservices.cpp qwinrtservices.h
        qwinrttheme.cpp qwinrttheme.h
        qwinrtwindow.cpp qwinrtwindow.h
    DEFINES
        QT_NO_CAST_FROM_ASCII
        __WRL_NO_DEFAULT_LIB__
    LIBRARIES
        d3d11
        ws2_32
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::EglSupportPrivate
        Qt::FontDatabaseSupportPrivate
        Qt::Gui
        Qt::GuiPrivate
)

#### Keys ignored in scope 1:.:.:winrt.pro:<TRUE>:
# OTHER_FILES = "winrt.json"
# WINRT_SDK_VERSION = "$$member($$list $$split WINRT_SDK_VERSION_STRING, . , 2)"
# WINRT_SDK_VERSION_STRING = "$$(UCRTVersion)"

## Scopes:
#####################################################################

qt_extend_target(QWinRTIntegrationPlugin CONDITION (WINRT_SDK_VERSION LESS 14322)
    DEFINES
        QT_WINRT_LIMITED_DRAGANDDROP
)

qt_extend_target(QWinRTIntegrationPlugin CONDITION (WINRT_SDK_VERSION GREATER 14393)
    DEFINES
        QT_WINRT_DISABLE_PHONE_COLORS
)

qt_extend_target(QWinRTIntegrationPlugin CONDITION QT_FEATURE_draganddrop
    SOURCES
        qwinrtdrag.cpp qwinrtdrag.h
)

qt_extend_target(QWinRTIntegrationPlugin CONDITION QT_FEATURE_accessibility
    SOURCES
        uiautomation/qwinrtuiaaccessibility.cpp uiautomation/qwinrtuiaaccessibility.h
        uiautomation/qwinrtuiabaseprovider.cpp uiautomation/qwinrtuiabaseprovider.h
        uiautomation/qwinrtuiacontrolmetadata.cpp uiautomation/qwinrtuiacontrolmetadata.h
        uiautomation/qwinrtuiaemptypropertyvalue.h
        uiautomation/qwinrtuiagriditemprovider.cpp uiautomation/qwinrtuiagriditemprovider.h
        uiautomation/qwinrtuiagridprovider.cpp uiautomation/qwinrtuiagridprovider.h
        uiautomation/qwinrtuiainvokeprovider.cpp uiautomation/qwinrtuiainvokeprovider.h
        uiautomation/qwinrtuiamainprovider.cpp uiautomation/qwinrtuiamainprovider.h
        uiautomation/qwinrtuiametadatacache.cpp uiautomation/qwinrtuiametadatacache.h
        uiautomation/qwinrtuiapeervector.cpp uiautomation/qwinrtuiapeervector.h
        uiautomation/qwinrtuiaprovidercache.cpp uiautomation/qwinrtuiaprovidercache.h
        uiautomation/qwinrtuiarangevalueprovider.cpp uiautomation/qwinrtuiarangevalueprovider.h
        uiautomation/qwinrtuiaselectionitemprovider.cpp uiautomation/qwinrtuiaselectionitemprovider.h
        uiautomation/qwinrtuiaselectionprovider.cpp uiautomation/qwinrtuiaselectionprovider.h
        uiautomation/qwinrtuiatableitemprovider.cpp uiautomation/qwinrtuiatableitemprovider.h
        uiautomation/qwinrtuiatableprovider.cpp uiautomation/qwinrtuiatableprovider.h
        uiautomation/qwinrtuiatextprovider.cpp uiautomation/qwinrtuiatextprovider.h
        uiautomation/qwinrtuiatextrangeprovider.cpp uiautomation/qwinrtuiatextrangeprovider.h
        uiautomation/qwinrtuiatoggleprovider.cpp uiautomation/qwinrtuiatoggleprovider.h
        uiautomation/qwinrtuiautils.cpp uiautomation/qwinrtuiautils.h
        uiautomation/qwinrtuiavalueprovider.cpp uiautomation/qwinrtuiavalueprovider.h
)

#### Keys ignored in scope 6:.:.:winrt.pro:NOT TARGET___equals____ss_QT_DEFAULT_QPA_PLUGIN:
# PLUGIN_EXTENDS = "-"
