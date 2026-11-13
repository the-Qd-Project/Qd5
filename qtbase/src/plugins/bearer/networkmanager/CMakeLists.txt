# Generated from networkmanager.pro.

#####################################################################
## QNetworkManagerEnginePlugin Plugin:
#####################################################################

qt_add_plugin(QNetworkManagerEnginePlugin
    OUTPUT_NAME qnmbearer
    TYPE bearer
    SOURCES
        ../linux_common/qofonoservice_linux.cpp ../linux_common/qofonoservice_linux_p.h
        ../qbearerengine_impl.h
        ../qnetworksession_impl.cpp ../qnetworksession_impl.h
        main.cpp
        qnetworkmanagerengine.cpp qnetworkmanagerengine.h
        qnetworkmanagerservice.cpp qnetworkmanagerservice.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::DBus
        Qt::NetworkPrivate
)

#### Keys ignored in scope 1:.:.:networkmanager.pro:<TRUE>:
# OTHER_FILES = "networkmanager.json"
