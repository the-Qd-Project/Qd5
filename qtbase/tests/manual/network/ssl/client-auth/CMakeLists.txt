# Generated from test_manual_ssl_client_auth.pro.

#####################################################################
## tst_manual_ssl_client_auth Binary:
#####################################################################

add_qt_manual_test(tst_manual_ssl_client_auth
    SOURCES
        tst_manual_ssl_client_auth.cpp
    PUBLIC_LIBRARIES
        Qt::Network
)

# Resources:
set(qmake_cert_bundle_resource_files
    "certs/127.0.0.1-client-key.pem"
    "certs/127.0.0.1-client.pem"
    "certs/127.0.0.1-key.pem"
    "certs/127.0.0.1.pem"
    "certs/accepted-client-key.pem"
    "certs/accepted-client.pem"
    "certs/rootCA.pem"
)

add_qt_resource(tst_manual_ssl_client_auth "qmake_cert_bundle"
    PREFIX
        "/"
    BASE
        "certs"
    FILES
        ${qmake_cert_bundle_resource_files}
)


#### Keys ignored in scope 1:.:.:test_manual_ssl_client_auth.pro:<TRUE>:
# TEMPLATE = "app"
