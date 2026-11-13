# Generated from eglfs_rcar.pro.

#####################################################################
## QEglFSRcarIntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QEglFSRcarIntegrationPlugin
    OUTPUT_NAME qeglfs-rcar-integration
    TYPE egldeviceintegrations
    SOURCES
        qeglfsrcarintegration.cpp qeglfsrcarintegration.h
        qeglfsrcarmain.cpp
    DEFINES
        EGL_API_FB=1
        LINUX=1
    INCLUDE_DIRECTORIES
        ../../api
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::EglFSDeviceIntegrationPrivate
        Qt::Gui
        Qt::GuiPrivate
)

#### Keys ignored in scope 1:.:.:eglfs_rcar.pro:<TRUE>:
# OTHER_FILES = "$$PWD/eglfs_rcar.json"
