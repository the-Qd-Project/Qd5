# Generated from staticplugin.pro.

#####################################################################
## moctestplugin Generic Library:
#####################################################################

qt_add_cmake_library(moctestplugin
    STATIC
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Core
)

# Resources:
set(qmake_plugin_resource_resource_files
    "main.cpp"
)

qt_add_resource(moctestplugin "qmake_plugin_resource"
    PREFIX
        "/staticplugin"
    FILES
        ${qmake_plugin_resource_resource_files}
)


#### Keys ignored in scope 1:.:.:staticplugin.pro:<TRUE>:
# TEMPLATE = "lib"

qt_autogen_tools_initial_setup(moctestplugin)

target_compile_definitions(moctestplugin PRIVATE QT_STATICPLUGIN)
