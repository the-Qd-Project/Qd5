# Generated from embedded.pro.

if(TARGET Qt::Widgets)
    add_subdirectory(desktopservices)
    add_subdirectory(weatherinfo)
endif()
if(QT_FEATURE_process AND TARGET Qt::Widgets)
    add_subdirectory(fluidlauncher)
endif()
