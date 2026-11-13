# Generated from qdbusabstractadaptor.pro.

#####################################################################
## tst_qdbusabstractadaptor Test:
#####################################################################

qt_add_test(tst_qdbusabstractadaptor
    OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/../"
    SOURCES
        ../myobject.h
        ../tst_qdbusabstractadaptor.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::DBus
)
