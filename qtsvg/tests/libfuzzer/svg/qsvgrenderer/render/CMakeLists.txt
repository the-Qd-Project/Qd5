# Generated from render.pro.

#####################################################################
## render Binary:
#####################################################################

qt_add_executable(render
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Svg
)

#### Keys ignored in scope 1:.:.:render.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"
# QTPLUGIN = "qminimal"

## Scopes:
#####################################################################

qt_extend_target(render CONDITION FUZZ_ENGINE_ISEMPTY
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(render CONDITION NOT FUZZ_ENGINE_ISEMPTY
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
