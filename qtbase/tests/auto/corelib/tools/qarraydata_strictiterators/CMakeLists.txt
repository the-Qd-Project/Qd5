# Generated from qarraydata_strictiterators.pro.

#####################################################################
## tst_qarraydata_strictiterators Test:
#####################################################################

qt_add_test(tst_qarraydata_strictiterators
    SOURCES
        ../qarraydata/simplevector.h
        ../qarraydata/tst_qarraydata.cpp
    DEFINES
        QT_STRICT_ITERATORS=1
        tst_QArrayData=tst_QArrayData_StrictIterators
)
