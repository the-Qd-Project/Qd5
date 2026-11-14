# Generated from main.pro.

#####################################################################
## manual_corelib_tools_qvector Binary:
#####################################################################

qt_add_manual_test(manual_corelib_tools_qvector
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

if(TARGET manual_corelib_tools_qvector)
    set_target_properties(manual_corelib_tools_qvector PROPERTIES OUTPUT_NAME "main")
endif()
