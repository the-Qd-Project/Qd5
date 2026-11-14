# Generated from main.pro.

#####################################################################
## manual_corelib_tools_qset Binary:
#####################################################################

qt_add_manual_test(manual_corelib_tools_qset
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

if(TARGET manual_corelib_tools_qset)
    set_target_properties(manual_corelib_tools_qset PROPERTIES OUTPUT_NAME "main")
endif()
