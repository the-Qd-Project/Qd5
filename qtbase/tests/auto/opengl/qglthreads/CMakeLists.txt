# Generated from qglthreads.pro.

if(NOT TARGET Qt::OpenGL)
    return()
endif()

#####################################################################
## tst_qglthreads Test:
#####################################################################

qt_add_test(tst_qglthreads
    SOURCES
        tst_qglthreads.cpp tst_qglthreads.h
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::OpenGL
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:qglthreads.pro:<TRUE>:
# _REQUIREMENTS = "qtHaveModule(opengl)"
