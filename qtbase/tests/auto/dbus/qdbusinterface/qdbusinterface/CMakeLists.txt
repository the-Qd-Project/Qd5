# Generated from qdbusinterface.pro.

#####################################################################
## tst_qdbusinterface Test:
#####################################################################

qt_add_test(tst_qdbusinterface
    OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/../"
    SOURCES
        ../myobject.h
        ../tst_qdbusinterface.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::DBus
        Qt::DBusPrivate
)

## Scopes:
#####################################################################

qt_extend_target(tst_qdbusinterface CONDITION QT_FEATURE_dbus_linked
    DEFINES
        QT_LINKED_LIBDBUS
    PUBLIC_LIBRARIES
        dbus-1
)

qt_extend_target(tst_qdbusinterface CONDITION NOT QT_FEATURE_dbus_linked
    SOURCES
        ../../../../../src/dbus/qdbus_symbols.cpp
)
