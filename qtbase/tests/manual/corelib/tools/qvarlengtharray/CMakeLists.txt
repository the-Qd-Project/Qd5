# Generated from main.pro.

#####################################################################
## manual_corelib_tools_qvarlengtharray Binary:
#####################################################################

qt_add_manual_test(manual_corelib_tools_qvarlengtharray
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

if(TARGET manual_corelib_tools_qvarlengtharray)
    set_target_properties(manual_corelib_tools_qvarlengtharray PROPERTIES OUTPUT_NAME "main")
endif()
