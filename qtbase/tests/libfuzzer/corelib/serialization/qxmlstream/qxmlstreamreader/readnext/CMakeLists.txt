# Generated from readnext.pro.

#####################################################################
## readnext Binary:
#####################################################################

qt_add_executable(readnext
    SOURCES
        main.cpp
)

#### Keys ignored in scope 1:.:.:readnext.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"

## Scopes:
#####################################################################

qt_extend_target(readnext CONDITION NOT FUZZ_ENGINE
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(readnext CONDITION FUZZ_ENGINE
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
