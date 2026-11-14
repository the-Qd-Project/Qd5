# Generated from qurl.pro.

#####################################################################
## bench_corelib_io_qurl Binary:
#####################################################################

qt_add_benchmark(bench_corelib_io_qurl
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Test
)

#### Keys ignored in scope 1:.:.:qurl.pro:<TRUE>:
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(bench_corelib_io_qurl CONDITION WIN32
    DEFINES
        _CRT_SECURE_NO_WARNINGS
)

if(TARGET bench_corelib_io_qurl)
    set_target_properties(bench_corelib_io_qurl PROPERTIES OUTPUT_NAME "tst_qurl")
endif()
