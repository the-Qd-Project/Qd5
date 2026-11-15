# Generated from project.pro.

#####################################################################
## project Binary:
#####################################################################

qt_add_executable(project
    GUI
    SOURCES
        main.cpp
        wildcard*.cpp-NOTFOUND
        wildcard/main*.cpp-NOTFOUND
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:project.pro:<TRUE>:
# MYVAR = "$$THIS_VARIABLE_IS_NOT_DEFINED"
# TRANSLATIONS = "project.ts"
# inst.files = "qml" "*.qml"

## Scopes:
#####################################################################

qt_extend_target(project CONDITION WIN32
    SOURCES
        main_win.cpp
)

qt_extend_target(project CONDITION UNIX
    SOURCES
        main_unix.cpp
)

qt_extend_target(project CONDITION APPLE
    SOURCES
        main_mac.cpp
)

qt_extend_target(project CONDITION ( EXISTS _ss_member(_ss_(PATH, 0)) )
    SOURCES
        vpaths/dependpath/main_dependpath.cpp
)
