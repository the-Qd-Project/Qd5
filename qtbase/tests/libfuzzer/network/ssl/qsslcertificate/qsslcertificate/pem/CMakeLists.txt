# Generated from pem.pro.

#####################################################################
## pem Binary:
#####################################################################

qt_add_executable(pem
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Network
)

#### Keys ignored in scope 1:.:.:pem.pro:<TRUE>:
# FUZZ_ENGINE = "$$(LIB_FUZZING_ENGINE)"

## Scopes:
#####################################################################

qt_extend_target(pem CONDITION NOT FUZZ_ENGINE
    LINK_OPTIONS
        "-fsanitize=fuzzer"
)

qt_extend_target(pem CONDITION FUZZ_ENGINE
    PUBLIC_LIBRARIES
        $ENV{LIB_FUZZING_ENGINE}
)
