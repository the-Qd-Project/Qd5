# Generated from qhttpnetworkconnection.pro.

#####################################################################
## manual_qhttpnetworkconnection Binary:
#####################################################################

qt_add_manual_test(manual_qhttpnetworkconnection
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Network
        Qt::Test
)

#### Keys ignored in scope 1:.:.:qhttpnetworkconnection.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_qhttpnetworkconnection)
    set_target_properties(manual_qhttpnetworkconnection PROPERTIES OUTPUT_NAME "tst_qhttpnetworkconnection")
endif()
