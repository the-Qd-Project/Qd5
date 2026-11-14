# Generated from networkselftest.pro.

#####################################################################
## tst_networkselftest_networkselftest Test:
#####################################################################

add_qt_test(tst_networkselftest_networkselftest
    SOURCES
        tst_networkselftest.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::Network
)

#### Keys ignored in scope 1:.:.:networkselftest.pro:<TRUE>:
# QT_TEST_SERVER_LIST = "cyrus" "vsftpd" "apache2" "ftp-proxy" "danted" "squid" "echo"

if(TARGET tst_networkselftest_networkselftest)
    set_target_properties(tst_networkselftest_networkselftest PROPERTIES OUTPUT_NAME "tst_networkselftest")
endif()
