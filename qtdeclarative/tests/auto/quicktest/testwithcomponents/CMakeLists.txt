# Generated from testwithcomponents.pro.

#####################################################################
## tst_quicktestwithcomponents Test:
#####################################################################

# Collect test data
file(GLOB_RECURSE test_data_glob
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/data/*.qml)
list(APPEND test_data ${test_data_glob})

qt_add_test(tst_quicktestwithcomponents
    QMLTEST
    SOURCES
        tst_quicktestwithcomponents.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Quick
    TESTDATA ${test_data}
)

## Scopes:
#####################################################################
