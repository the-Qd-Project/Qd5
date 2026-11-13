# Generated from next.pro.

#####################################################################
## next Binary:
#####################################################################

qt_add_executable(next
    SOURCES
        main.cpp
)

#### Keys ignored in scope 1:.:.:next.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"

## Scopes:
#####################################################################

qt_extend_target(next CONDITION FUZZ_ENGINE_ISEMPTY
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(next CONDITION NOT FUZZ_ENGINE_ISEMPTY
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
