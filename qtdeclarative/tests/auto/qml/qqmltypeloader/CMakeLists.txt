# Generated from tst_qqmltypeloader.pro.

#####################################################################
## tst_qqmltypeloader Test:
#####################################################################

qt_add_test(tst_qqmltypeloader
    SOURCES
        ../../shared/testhttpserver.cpp ../../shared/testhttpserver.h
        ../../shared/util.cpp ../../shared/util.h
        declarativetesttype.h
        tst_qqmltypeloader.cpp
    INCLUDE_DIRECTORIES
        ../../shared
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Qml
        Qt::QmlPrivate
        Qt::Quick
)

#### Keys ignored in scope 1:.:.:tst_qqmltypeloader.pro:<TRUE>:
# QML_IMPORT_NAME = "declarative.import.for.typeloader.test"
# QML_IMPORT_VERSION = "3.2"

## Scopes:
#####################################################################

qt_extend_target(tst_qqmltypeloader CONDITION ANDROID OR APPLE_IOS
    DEFINES
        QT_QMLTEST_DATADIR=\\\":/data\\\"
)

qt_extend_target(tst_qqmltypeloader CONDITION NOT ANDROID AND NOT APPLE_IOS
    DEFINES
        QT_QMLTEST_DATADIR=\\\"${CMAKE_CURRENT_SOURCE_DIR}/data\\\"
)

set_target_properties(tst_qqmltypeloader PROPERTIES
    QT_QML_MODULE_INSTALL_QMLTYPES TRUE
    QT_QML_MODULE_VERSION 3.2
    QT_QML_MODULE_URI declarative.import.for.typeloader.test
)

qt5_qml_type_registration(tst_qqmltypeloader)
