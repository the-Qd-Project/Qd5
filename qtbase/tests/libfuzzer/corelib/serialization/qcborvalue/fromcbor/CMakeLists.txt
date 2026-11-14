# Generated from fromcbor.pro.

#####################################################################
## fromcbor Binary:
#####################################################################

qt_add_executable(fromcbor
    SOURCES
        main.cpp
)

#### Keys ignored in scope 1:.:.:fromcbor.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"

## Scopes:
#####################################################################

qt_extend_target(fromcbor CONDITION NOT FUZZ_ENGINE
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(fromcbor CONDITION FUZZ_ENGINE
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
