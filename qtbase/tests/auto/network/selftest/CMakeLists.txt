# Generated from selftest.pro.

if(NOT QT_FEATURE_private_tests)
    return()
endif()

#####################################################################
## tst_networkselftest Test:
#####################################################################

qt_add_test(tst_networkselftest
    SOURCES
        tst_networkselftest.cpp
    PUBLIC_LIBRARIES
        Qt::Network
        Qt::NetworkPrivate
)

#### Keys ignored in scope 1:.:.:selftest.pro:<TRUE>:
# _REQUIREMENTS = "qtConfig(private_tests)"
