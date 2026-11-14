# Generated from qnetworkconfiguration.pro.

#####################################################################
## manual_qnetworkconfiguration Binary:
#####################################################################

qt_add_manual_test(manual_qnetworkconfiguration
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Network
        Qt::Test
)

#### Keys ignored in scope 1:.:.:qnetworkconfiguration.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_qnetworkconfiguration)
    set_target_properties(manual_qnetworkconfiguration PROPERTIES OUTPUT_NAME "tst_qnetworkconfiguration")
endif()
