# Generated from qmap_strictiterators.pro.

#####################################################################
## tst_qmap_strictiterators Test:
#####################################################################

qt_add_test(tst_qmap_strictiterators
    SOURCES
        ../qmap/tst_qmap.cpp
    DEFINES
        -QT_NO_JAVA_STYLE_ITERATORS
        QT_STRICT_ITERATORS
        tst_QMap=tst_QMap_StrictIterators
)
