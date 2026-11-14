# Generated from create.pro.

#####################################################################
## create Binary:
#####################################################################

qt_add_executable(create
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Qml
)

#### Keys ignored in scope 1:.:.:create.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"

## Scopes:
#####################################################################

qt_extend_target(create CONDITION FUZZ_ENGINE_ISEMPTY
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(create CONDITION NOT FUZZ_ENGINE_ISEMPTY
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
