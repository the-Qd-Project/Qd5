# Generated from test.pro.

#####################################################################
## tst_qlocale Test:
#####################################################################

qt_add_test(tst_qlocale
    OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/../"
    SOURCES
        ../tst_qlocale.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
)

## Scopes:
#####################################################################

qt_extend_target(tst_qlocale CONDITION embedded
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 7:.:.:test.pro:NOT ANDROID AND NOT WINRT:
# TEST_HELPER_INSTALLS = "../syslocaleapp/syslocaleapp"
