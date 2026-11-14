# Generated from selftest.pro.

if(NOT QT_FEATURE_private_tests)
    return()
endif()

#####################################################################
## tst_networkselftest_selftest Test:
#####################################################################

add_qt_test(tst_networkselftest_selftest
    SOURCES
        tst_networkselftest.cpp
    PUBLIC_LIBRARIES
        Qt::Network
        Qt::NetworkPrivate
)

#### Keys ignored in scope 1:.:.:selftest.pro:<TRUE>:
# _REQUIREMENTS = "qtConfig(private_tests)"

if(TARGET tst_networkselftest_selftest)
    set_target_properties(tst_networkselftest_selftest PROPERTIES OUTPUT_NAME "tst_networkselftest")
endif()
