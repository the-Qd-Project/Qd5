# Generated from fromstring.pro.

#####################################################################
## fromstring Binary:
#####################################################################

qt_add_executable(fromstring
    SOURCES
        main.cpp
)

#### Keys ignored in scope 1:.:.:fromstring.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"

## Scopes:
#####################################################################

qt_extend_target(fromstring CONDITION NOT FUZZ_ENGINE
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(fromstring CONDITION FUZZ_ENGINE
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
