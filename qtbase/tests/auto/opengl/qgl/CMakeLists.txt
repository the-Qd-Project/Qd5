# Generated from qgl.pro.

if(NOT TARGET Qt::OpenGL)
    return()
endif()

#####################################################################
## tst_qgl Test:
#####################################################################

add_qt_test(tst_qgl
    SOURCES
        tst_qgl.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::OpenGLPrivate
        Qt::Widgets
        Qt::WidgetsPrivate
)

# Resources:
set_source_files_properties("../../gui/image/qpixmap/images/designer.png"
    PROPERTIES QT_RESOURCE_ALIAS "designer.png"
)
set(qgl_resource_files
    "../../gui/image/qpixmap/images/designer.png"
)

qt_add_resource(tst_qgl "qgl"
    PREFIX
        "/"
    FILES
        ${qgl_resource_files}
)


#### Keys ignored in scope 1:.:.:qgl.pro:<TRUE>:
# _REQUIREMENTS = "qtHaveModule(opengl)"
