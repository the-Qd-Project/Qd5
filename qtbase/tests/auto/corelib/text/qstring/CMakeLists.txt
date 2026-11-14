# Generated from qstring.pro.

#####################################################################
## tst_qstring Test:
#####################################################################

add_qt_test(tst_qstring
    SOURCES
        tst_qstring.cpp
    DEFINES
        QT_DISABLE_DEPRECATED_BEFORE=0
    PUBLIC_LIBRARIES
        Qt::CorePrivate
)

## Scopes:
#####################################################################

qt_extend_target(tst_qstring CONDITION APPLE
    SOURCES
        tst_qstring_mac.mm
    PUBLIC_LIBRARIES
        ${FWFoundation}
)
