# Generated from opengl.pro.

if(TARGET Qt::Widgets AND NOT QT_FEATURE_dynamicgl AND NOT QT_FEATURE_opengles2)
    add_subdirectory(framebufferobject)
endif()
