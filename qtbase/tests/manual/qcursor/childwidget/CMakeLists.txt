# Generated from childwidget.pro.

#####################################################################
## manual_qcursor_childwidget Binary:
#####################################################################

qt_add_manual_test(manual_qcursor_childwidget
    GUI
    SOURCES
        main.cpp
    INCLUDE_DIRECTORIES
        .
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:childwidget.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET manual_qcursor_childwidget)
    set_target_properties(manual_qcursor_childwidget PROPERTIES OUTPUT_NAME "childwidget")
endif()
