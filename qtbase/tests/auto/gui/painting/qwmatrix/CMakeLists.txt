# Generated from qwmatrix.pro.

#####################################################################
## tst_qwmatrix Test:
#####################################################################

qt_add_test(tst_qwmatrix
    SOURCES
        tst_qwmatrix.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

## Scopes:
#####################################################################

qt_extend_target(tst_qwmatrix CONDITION UNIX AND NOT APPLE AND NOT HAIKU AND NOT INTEGRITY
    PUBLIC_LIBRARIES
        m
)
