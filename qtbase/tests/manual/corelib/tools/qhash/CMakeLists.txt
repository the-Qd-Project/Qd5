# Generated from main.pro.

#####################################################################
## manual_corelib_tools_qhash Binary:
#####################################################################

qt_add_manual_test(manual_corelib_tools_qhash
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

if(TARGET manual_corelib_tools_qhash)
    set_target_properties(manual_corelib_tools_qhash PROPERTIES OUTPUT_NAME "main")
endif()
