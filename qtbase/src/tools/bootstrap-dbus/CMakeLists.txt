# Generated from bootstrap-dbus.pro.

#####################################################################
## BootstrapDBus Module:
#####################################################################

qt_add_module(BootstrapDBus
    STATIC
    INTERNAL_MODULE
    NO_SYNC_QT
    SOURCES
        ../../dbus/qdbus_symbols.cpp
        ../../dbus/qdbusargument.cpp
        ../../dbus/qdbuserror.cpp
        ../../dbus/qdbusextratypes.cpp
        ../../dbus/qdbusintrospection.cpp
        ../../dbus/qdbusmetatype.cpp
        ../../dbus/qdbusmisc.cpp
        ../../dbus/qdbusunixfiledescriptor.cpp
        ../../dbus/qdbusutil.cpp
        ../../dbus/qdbusxmlparser.cpp
    DEFINES
        QT_NO_CAST_FROM_ASCII
        QT_NO_FOREACH
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:bootstrap-dbus.pro:<TRUE>:
# INSTALLS = "lib"
# MODULE = "bootstrap_dbus"
# MODULE_INCNAME = "QtDBus"
# _OPTION = "host_build"
# lib.CONFIG = "dummy_install"
