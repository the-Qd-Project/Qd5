# Generated from tst_qlockfile.pro.

#####################################################################
## tst_qlockfile Test:
#####################################################################

add_qt_test(tst_qlockfile
    SOURCES
        tst_qlockfile.cpp
    PUBLIC_LIBRARIES
        Qt::Concurrent
        Qt::CorePrivate
)

## Scopes:
#####################################################################

qt_extend_target(tst_qlockfile CONDITION WIN32 AND NOT WINRT
    PUBLIC_LIBRARIES
        advapi32
)
