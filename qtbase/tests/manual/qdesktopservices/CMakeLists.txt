# Generated from qdesktopservices.pro.

#####################################################################
## manual_qdesktopservices Binary:
#####################################################################

qt_add_manual_test(manual_qdesktopservices
    SOURCES
        tst_qdesktopservices.cpp
    DEFINES
        SRCDIR=\\\"${CMAKE_CURRENT_SOURCE_DIR}/\\\"
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Test
)

#### Keys ignored in scope 1:.:.:qdesktopservices.pro:<TRUE>:
# OTHER_FILES = "test.txt"
# TEMPLATE = "app"

if(TARGET manual_qdesktopservices)
    set_target_properties(manual_qdesktopservices PROPERTIES OUTPUT_NAME "tst_qdesktopservices")
endif()
