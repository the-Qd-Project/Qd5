# Generated from nativewifi.pro.

#####################################################################
## QNativeWifiEnginePlugin Plugin:
#####################################################################

qt_add_plugin(QNativeWifiEnginePlugin
    OUTPUT_NAME qnativewifibearer
    TYPE bearer
    SOURCES
        ../qbearerengine_impl.h
        ../qnetworksession_impl.cpp ../qnetworksession_impl.h
        main.cpp
        platformdefs.h
        qnativewifiengine.cpp qnativewifiengine.h
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::NetworkPrivate
)

#### Keys ignored in scope 1:.:.:nativewifi.pro:<TRUE>:
# OTHER_FILES = "nativewifi.json"
