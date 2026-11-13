# Generated from src.pro.

#####################################################################
## QAndroidBearerEnginePlugin Plugin:
#####################################################################

qt_add_plugin(QAndroidBearerEnginePlugin
    OUTPUT_NAME qandroidbearer
    TYPE bearer
    SOURCES
        ../../qbearerengine_impl.h
        ../../qnetworksession_impl.cpp ../../qnetworksession_impl.h
        main.cpp
        qandroidbearerengine.cpp qandroidbearerengine.h
        wrappers/androidconnectivitymanager.cpp wrappers/androidconnectivitymanager.h
    INCLUDE_DIRECTORIES
        wrappers
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::NetworkPrivate
)
