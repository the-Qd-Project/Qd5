# Generated from connman.pro.

#####################################################################
## QConnmanEnginePlugin Plugin:
#####################################################################

qt_add_plugin(QConnmanEnginePlugin
    OUTPUT_NAME qconnmanbearer
    TYPE bearer
    SOURCES
        ../linux_common/qofonoservice_linux.cpp ../linux_common/qofonoservice_linux_p.h
        ../qbearerengine_impl.h
        ../qnetworksession_impl.cpp ../qnetworksession_impl.h
        main.cpp
        qconnmanengine.cpp qconnmanengine.h
        qconnmanservice_linux.cpp qconnmanservice_linux_p.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::DBus
        Qt::NetworkPrivate
)

#### Keys ignored in scope 1:.:.:connman.pro:<TRUE>:
# OTHER_FILES = "connman.json"
