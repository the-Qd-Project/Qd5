# Generated from svg.pro.

add_subdirectory(embedded)
add_subdirectory(richtext)
add_subdirectory(draganddrop)
if(TARGET Qt::Widgets)
    add_subdirectory(embeddedsvgviewer)
    add_subdirectory(svggenerator)
    add_subdirectory(svgviewer)
endif()
if(TARGET Qt::OpenGL AND NOT QT_FEATURE_opengles2)
    add_subdirectory(opengl)
endif()
