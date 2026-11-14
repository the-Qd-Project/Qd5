# Generated from qtabbar.pro.

#####################################################################
## manual_qtabbar Binary:
#####################################################################

qt_add_manual_test(manual_qtabbar
    GUI
    SOURCES
        main.cpp
        tabbarform.cpp tabbarform.h tabbarform.ui
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
    ENABLE_AUTOGEN_TOOLS
        uic
)

#### Keys ignored in scope 1:.:.:qtabbar.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_qtabbar)
    set_target_properties(manual_qtabbar PROPERTIES OUTPUT_NAME "qtabbar")
endif()
