# Generated from project.pro.

#####################################################################
## project Binary:
#####################################################################

qt_add_executable(project
    GUI
    SOURCES
        (QUOTEDEXTRA, " ")
        (V,0,1)
        (V2S, "_")
        x/d/g.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:project.pro:<TRUE>:
# QUOTED = "['quote', ['variable', 'with', 'spaces']]"
# QUOTEDEXTRA = "x/$$QUOTED/z"
# TRANSLATIONS = "project.ts"
# V = "$$VAB" "$$QUOTED"
# V2 = "$$member(V,2)"
# V2S = "$$split(V2, " ")"
# VAB = "$$split(VERSIONAB, ".")"
# VERSIONAB = "a.b"

## Scopes:
#####################################################################

qt_extend_target(project CONDITION WIN32
    SOURCES
        (type files-cc.txt)
)

qt_extend_target(project CONDITION UNIX
    SOURCES
        (cat files-cc.txt)
)
