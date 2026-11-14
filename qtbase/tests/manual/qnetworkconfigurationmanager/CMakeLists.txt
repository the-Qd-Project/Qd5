# Generated from qnetworkconfigurationmanager.pro.

#####################################################################
## manual_qnetworkconfigurationmanager Binary:
#####################################################################

qt_add_manual_test(manual_qnetworkconfigurationmanager
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Network
        Qt::Test
)

#### Keys ignored in scope 1:.:.:qnetworkconfigurationmanager.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_qnetworkconfigurationmanager)
    set_target_properties(manual_qnetworkconfigurationmanager PROPERTIES OUTPUT_NAME "tst_qnetworkconfigurationmanager")
endif()
