# Generated from main.pro.

#####################################################################
## manual_corelib_tools_qlist Binary:
#####################################################################

qt_add_manual_test(manual_corelib_tools_qlist
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

if(TARGET manual_corelib_tools_qlist)
    set_target_properties(manual_corelib_tools_qlist PROPERTIES OUTPUT_NAME "main")
endif()
