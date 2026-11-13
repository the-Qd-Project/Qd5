# Generated from nla.pro.

#####################################################################
## QNlaEnginePlugin Plugin:
#####################################################################

qt_add_plugin(QNlaEnginePlugin
    OUTPUT_NAME qnlabearer
    TYPE bearer
    SOURCES
        ../platformdefs_win.h
        ../qbearerengine_impl.h
        ../qnetworksession_impl.cpp ../qnetworksession_impl.h
        main.cpp
        qnlaengine.cpp qnlaengine.h
    LIBRARIES
        ws2_32
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::Network
        Qt::NetworkPrivate
)

#### Keys ignored in scope 1:.:.:nla.pro:<TRUE>:
# OTHER_FILES = "nla.json"
