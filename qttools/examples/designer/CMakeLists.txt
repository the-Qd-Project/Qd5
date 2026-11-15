# Generated from designer.pro.

add_subdirectory(calculatorform)
if(NOT solaris-cc_x_ AND NOT static)
    add_subdirectory(calculatorbuilder)
    add_subdirectory(worldtimeclockbuilder)
endif()
if(NOT static)
    add_subdirectory(containerextension)
    add_subdirectory(customwidgetplugin)
    add_subdirectory(taskmenuextension)
    add_subdirectory(worldtimeclockplugin)
endif()
