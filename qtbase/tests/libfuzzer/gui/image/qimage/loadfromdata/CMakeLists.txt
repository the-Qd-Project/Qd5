# Generated from loadfromdata.pro.

#####################################################################
## loadfromdata Binary:
#####################################################################

qt_add_executable(loadfromdata
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:loadfromdata.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"
# QTPLUGIN = "qminimal"

## Scopes:
#####################################################################

qt_extend_target(loadfromdata CONDITION NOT QT.svg.name_ISEMPTY
    PUBLIC_LIBRARIES
        Qt::Svg
)

qt_extend_target(loadfromdata CONDITION NOT FUZZ_ENGINE
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(loadfromdata CONDITION FUZZ_ENGINE
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
