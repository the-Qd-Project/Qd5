# Generated from qmaccocoaviewcontainer.pro.

#####################################################################
## manual_cocoa_qmaccocoaviewcontainer Binary:
#####################################################################

qt_add_manual_test(manual_cocoa_qmaccocoaviewcontainer
    GUI
    SOURCES
        TestMouseMovedNSView.h TestMouseMovedNSView.m
        main.mm
    INCLUDE_DIRECTORIES
        .
    PUBLIC_LIBRARIES
        ${FWAppKit}
        Qt::Gui
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:qmaccocoaviewcontainer.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_cocoa_qmaccocoaviewcontainer)
    set_target_properties(manual_cocoa_qmaccocoaviewcontainer PROPERTIES OUTPUT_NAME "qmaccocoaviewcontainer")
endif()
