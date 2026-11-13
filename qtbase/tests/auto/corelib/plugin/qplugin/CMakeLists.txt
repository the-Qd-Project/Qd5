# Generated from tst_qplugin.pro.

#####################################################################
## tst_qplugin Test:
#####################################################################

# Collect test data
file(GLOB_RECURSE test_data_glob
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    plugins/*)
list(APPEND test_data ${test_data_glob})

add_qt_test(tst_qplugin
    SOURCES
        tst_qplugin.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
    TESTDATA ${test_data}
)
