# Generated from qhash_strictiterators.pro.

#####################################################################
## tst_qhash_strictiterators Test:
#####################################################################

qt_add_test(tst_qhash_strictiterators
    SOURCES
        ../qhash/tst_qhash.cpp
    DEFINES
        -QT_NO_JAVA_STYLE_ITERATORS
        QT_STRICT_ITERATORS
        tst_QHash=tst_QHash_StrictIterators
)
