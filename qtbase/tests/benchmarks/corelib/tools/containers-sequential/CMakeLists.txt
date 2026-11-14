# Generated from containers-sequential.pro.

#####################################################################
## tst_bench_containers-sequential Binary:
#####################################################################

qt_add_benchmark(tst_bench_containers-sequential
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Test
)

#### Keys ignored in scope 1:.:.:containers-sequential.pro:<TRUE>:
# TEMPLATE = "app"

if(TARGET bench_corelib_tools_containers_sequential)
    set_target_properties(bench_corelib_tools_containers_sequential PROPERTIES OUTPUT_NAME "tst_bench_containers")
endif()
