# Generated from qcursorhighdpi.pro.

#####################################################################
## qcursorhighdpi Binary:
#####################################################################

qt_add_manual_test(qcursorhighdpi
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:qcursorhighdpi.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(qcursorhighdpi CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::GuiPrivate
        Qt::Widgets
)

qt_extend_target(qcursorhighdpi CONDITION WIN32
    PUBLIC_LIBRARIES
        User32
)
