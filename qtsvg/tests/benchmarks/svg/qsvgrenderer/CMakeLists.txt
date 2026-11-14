# Generated from qsvgrenderer.pro.

#####################################################################
## tst_bench_qsvgrenderer Test:
#####################################################################

qt_add_test(tst_bench_qsvgrenderer
    SOURCES
        tst_qsvgrenderer.cpp
    DEFINES
        QT_DISABLE_DEPRECATED_BEFORE=0
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Svg
)

# Resources:
set(qsvgrenderer_resource_files
    "data/tiger.svg"
)

qt_add_resource(tst_bench_qsvgrenderer "qsvgrenderer"
    PREFIX
        "/"
    FILES
        ${qsvgrenderer_resource_files}
)


#### Keys ignored in scope 1:.:.:qsvgrenderer.pro:<TRUE>:
# TEMPLATE = "app"
