# Generated from eglfs_kms_vsp2.pro.

#####################################################################
## QEglFSKmsVsp2IntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QEglFSKmsVsp2IntegrationPlugin
    OUTPUT_NAME qeglfs-kms-vsp2-integration
    TYPE egldeviceintegrations
    SOURCES
        qeglfskmsvsp2device.cpp qeglfskmsvsp2device.h
        qeglfskmsvsp2integration.cpp qeglfskmsvsp2integration.h
        qeglfskmsvsp2main.cpp
        qeglfskmsvsp2screen.cpp qeglfskmsvsp2screen.h
        qlinuxmediadevice.cpp qlinuxmediadevice.h
        qvsp2blendingdevice.cpp qvsp2blendingdevice.h
    DEFINES
        QT_EGL_NO_X11
    INCLUDE_DIRECTORIES
        ../../api
        ../eglfs_kms_support
    PUBLIC_LIBRARIES
        Libdrm::Libdrm
        Qt::Core
        Qt::CorePrivate
        Qt::EdidSupportPrivate
        Qt::EglFSDeviceIntegrationPrivate
        Qt::EglFsKmsSupportPrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::KmsSupportPrivate
        gbm::gbm
        v4l2
)

#### Keys ignored in scope 1:.:.:eglfs_kms_vsp2.pro:<TRUE>:
# OTHER_FILES = "$$PWD/eglfs_kms.json"
