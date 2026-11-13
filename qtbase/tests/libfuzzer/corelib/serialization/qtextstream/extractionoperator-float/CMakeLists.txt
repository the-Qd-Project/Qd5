# Generated from extractionoperator-float.pro.

#####################################################################
## extractionoperator-float Binary:
#####################################################################

qt_add_executable(extractionoperator-float
    SOURCES
        main.cpp
)

#### Keys ignored in scope 1:.:.:extractionoperator-float.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"

## Scopes:
#####################################################################

qt_extend_target(extractionoperator-float CONDITION FUZZ_ENGINE_ISEMPTY
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(extractionoperator-float CONDITION NOT FUZZ_ENGINE_ISEMPTY
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
