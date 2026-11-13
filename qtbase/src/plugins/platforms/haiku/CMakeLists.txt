# Generated from haiku.pro.

#####################################################################
## QHaikuIntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QHaikuIntegrationPlugin
    OUTPUT_NAME qhaiku
    TYPE platforms
    DEFAULT_IF ${QT_QPA_DEFAULT_PLATFORM} MATCHES haiku # special case
    SOURCES
        main.cpp main.h
        qhaikuapplication.cpp qhaikuapplication.h
        qhaikubuffer.cpp qhaikubuffer.h
        qhaikuclipboard.cpp qhaikuclipboard.h
        qhaikucursor.cpp qhaikucursor.h
        qhaikuintegration.cpp qhaikuintegration.h
        qhaikukeymapper.cpp qhaikukeymapper.h
        qhaikurasterbackingstore.cpp qhaikurasterbackingstore.h
        qhaikurasterwindow.cpp qhaikurasterwindow.h
        qhaikuscreen.cpp qhaikuscreen.h
        qhaikuservices.cpp qhaikuservices.h
        qhaikuutils.cpp qhaikuutils.h
        qhaikuwindow.cpp qhaikuwindow.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::EventDispatcherSupportPrivate
        Qt::Gui
        Qt::GuiPrivate
        be
)

#### Keys ignored in scope 1:.:.:haiku.pro:<TRUE>:
# OTHER_FILES = "haiku.json"
