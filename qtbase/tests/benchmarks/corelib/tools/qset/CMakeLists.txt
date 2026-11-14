# Generated from qset.pro.

#####################################################################
## bench_corelib_tools_qset Binary:
#####################################################################

qt_add_benchmark(bench_corelib_tools_qset
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Test
)

if(TARGET bench_corelib_tools_qset)
    set_target_properties(bench_corelib_tools_qset PROPERTIES OUTPUT_NAME "tst_qset")
endif()
