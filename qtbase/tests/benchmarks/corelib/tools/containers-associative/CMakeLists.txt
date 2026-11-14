# Generated from containers-associative.pro.

#####################################################################
## tst_bench_containers-associative Binary:
#####################################################################

qt_add_benchmark(tst_bench_containers-associative
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Test
)

#### Keys ignored in scope 1:.:.:containers-associative.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET bench_corelib_tools_containers_associative)
    set_target_properties(bench_corelib_tools_containers_associative PROPERTIES OUTPUT_NAME "tst_bench_containers")
endif()
