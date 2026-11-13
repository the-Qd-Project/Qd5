# Generated from foreignwindows.pro.

#####################################################################
## foreignwindows Binary:
#####################################################################

qt_add_manual_test(foreignwindows
    SOURCES
        ../diaglib/eventfilter.cpp ../diaglib/eventfilter.h
        ../diaglib/nativewindowdump.h
        ../diaglib/qwindowdump.cpp ../diaglib/qwindowdump.h
        ../diaglib/textdump.cpp ../diaglib/textdump.h
        main.cpp
    DEFINES
        QT_DIAG_LIB
    INCLUDE_DIRECTORIES
        ../diaglib
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Widgets
)

#### Keys ignored in scope 1:.:.:foreignwindows.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(foreignwindows CONDITION WIN32 AND NOT WINRT
    SOURCES
        ../diaglib/nativewindowdump_win.cpp
    PUBLIC_LIBRARIES
        user32
)

qt_extend_target(foreignwindows CONDITION UNIX OR WINRT
    SOURCES
        ../diaglib/nativewindowdump.cpp
)

qt_extend_target(foreignwindows CONDITION (QT_MAJOR_VERSION GREATER 4)
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::GuiPrivate
)

qt_extend_target(foreignwindows CONDITION ((QT_MAJOR_VERSION GREATER 4)) AND (QT_FEATURE_widgets)
    SOURCES
        ../diaglib/debugproxystyle.cpp ../diaglib/debugproxystyle.h
        ../diaglib/logwidget.cpp ../diaglib/logwidget.h
        ../diaglib/qwidgetdump.cpp ../diaglib/qwidgetdump.h
)

qt_extend_target(foreignwindows CONDITION NOT ((QT_MAJOR_VERSION GREATER 4))
    SOURCES
        ../diaglib/debugproxystyle.cpp ../diaglib/debugproxystyle.h
        ../diaglib/logwidget.cpp ../diaglib/logwidget.h
        ../diaglib/qwidgetdump.cpp ../diaglib/qwidgetdump.h
)

qt_extend_target(foreignwindows CONDITION QT_FEATURE_opengl
    SOURCES
        ../diaglib/glinfo.cpp ../diaglib/glinfo.h
)
