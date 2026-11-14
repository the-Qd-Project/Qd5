# Generated from test.pro.

#####################################################################
## tst_qsharedmemory Test:
#####################################################################

add_qt_test(tst_qsharedmemory
    SOURCES
        tst_qsharedmemory.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
)

## Scopes:
#####################################################################

qt_extend_target(tst_qsharedmemory CONDITION LINUX
    PUBLIC_LIBRARIES
        rt
)
