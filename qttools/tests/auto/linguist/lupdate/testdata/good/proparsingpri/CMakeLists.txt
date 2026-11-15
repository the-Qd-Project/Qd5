# Generated from project.pro.

#####################################################################
## project Binary:
#####################################################################

qt_add_executable(project
    GUI
    SOURCES
        common/main.cpp
        relativity/sub2/../relativity.cpp
        win/main_win.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:project.pro:<TRUE>:
# TRANSLATIONS = "project.ts"
# more = "mac" "unix"
