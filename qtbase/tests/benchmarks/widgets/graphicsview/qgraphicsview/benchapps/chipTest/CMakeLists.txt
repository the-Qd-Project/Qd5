# Generated from chip.pro.

#####################################################################
## bench_widgets_graphicsview_qgraphicsview_benchapps_chipTest Binary:
#####################################################################

qt_add_benchmark(bench_widgets_graphicsview_qgraphicsview_benchapps_chipTest
    GUI
    SOURCES
        chip.cpp chip.h
        main.cpp
        mainwindow.cpp mainwindow.h
        view.cpp view.h
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(images_resource_files
    "fileprint.png"
    "qt4logo.png"
    "rotateleft.png"
    "rotateright.png"
    "zoomin.png"
    "zoomout.png"
)

qt_add_resource(bench_widgets_graphicsview_qgraphicsview_benchapps_chipTest "images"
    PREFIX
        "/"
    FILES
        ${images_resource_files}
)


#### Keys ignored in scope 1:.:.:chip.pro:<TRUE>:
# INSTALLS = "target" "sources"
# sources.files = "$$SOURCES" "$$HEADERS" "$$RESOURCES" "*.png" "*.pro" "*.html" "*.doc" "images"
# sources.path = "$$[QT_INSTALL_EXAMPLES]/graphicsview/chip"
# target.path = "$$[QT_INSTALL_EXAMPLES]/graphicsview/chip"

## Scopes:
#####################################################################

qt_extend_target(bench_widgets_graphicsview_qgraphicsview_benchapps_chipTest CONDITION TARGET Qt::OpenGL
    PUBLIC_LIBRARIES
        Qt::OpenGL
)

if(TARGET bench_widgets_graphicsview_qgraphicsview_benchapps_chipTest)
    set_target_properties(bench_widgets_graphicsview_qgraphicsview_benchapps_chipTest PROPERTIES OUTPUT_NAME "chip")
endif()
