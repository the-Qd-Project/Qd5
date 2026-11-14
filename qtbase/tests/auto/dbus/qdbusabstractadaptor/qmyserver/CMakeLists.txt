# Generated from qmyserver.pro.

#####################################################################
## qmyserver Binary:
#####################################################################

qt_add_executable(qmyserver_qdbusinterface
    OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/"
    SOURCES
        ../myobject.h
        qmyserver.cpp
    PUBLIC_LIBRARIES
        Qt::DBus
)
set_target_properties(qmyserver_qdbusinterface PROPERTIES OUTPUT_NAME qmyserver)
