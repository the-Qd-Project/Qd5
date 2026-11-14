# Generated from multiwindow.pro.

#####################################################################
## manual_qopenglwindow_multiwindow Binary:
#####################################################################

qt_add_manual_test(manual_qopenglwindow_multiwindow
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:multiwindow.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_qopenglwindow_multiwindow)
    set_target_properties(manual_qopenglwindow_multiwindow PROPERTIES OUTPUT_NAME "multiwindow")
endif()
