# Generated from qsharedpointer.pro.

#####################################################################
## tst_qsharedpointer Test:
#####################################################################

# Collect test data
list(APPEND test_data "forwarddeclared.cpp")
list(APPEND test_data "forwarddeclared.h")

add_qt_test(tst_qsharedpointer
    SOURCES
        externaltests.cpp externaltests.h
        forwarddeclared.cpp forwarddeclared.h
        nontracked.cpp nontracked.h
        tst_qsharedpointer.cpp
        wrapper.cpp wrapper.h
    DEFINES
        "DEFAULT_MAKESPEC=\"${QT_QMAKE_TARGET_MKSPEC}\""
        QT_DISABLE_DEPRECATED_BEFORE=0
    TESTDATA ${test_data}
)

## Scopes:
#####################################################################

qt_extend_target(tst_qsharedpointer CONDITION CMAKE_CROSSCOMPILING
    DEFINES
        QTEST_CROSS_COMPILED
        QTEST_NO_RTTI
)
