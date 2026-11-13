# Generated from sessionmanagement_macos.pro.

if(NOT APPLE)
    return()
endif()

#####################################################################
## tst_sessionmanagement_macos Test:
#####################################################################

qt_add_test(tst_sessionmanagement_macos
    SOURCES
        tst_sessionmanagement_macos.mm
    DEFINES
        QT_DISABLE_DEPRECATED_BEFORE=0
    PUBLIC_LIBRARIES
        ${FWAppKit}
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:sessionmanagement_macos.pro:<TRUE>:
# _REQUIREMENTS = "mac"
