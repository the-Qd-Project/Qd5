# Generated from menus.pro.

#####################################################################
## manual_cocoa_menus Binary:
#####################################################################

qt_add_manual_test(manual_cocoa_menus
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:menus.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_cocoa_menus)
    set_target_properties(manual_cocoa_menus PROPERTIES OUTPUT_NAME "menus")
endif()
