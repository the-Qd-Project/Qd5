# Generated from qmltyperegistrar.pro.

#####################################################################
## tst_qmltyperegistrar Test:
#####################################################################

qt_add_test(tst_qmltyperegistrar
    SOURCES
        hppheader.hpp
        noextheader
        tst_qmltyperegistrar.cpp tst_qmltyperegistrar.h
    INCLUDE_DIRECTORIES
        foreign
    PUBLIC_LIBRARIES
        Qt::Qml
)

#### Keys ignored in scope 2:.:.:tst_qmltyperegistrar.pro:<TRUE>:
# QMLTYPES_FILENAME = "tst_qmltyperegistrar.qmltypes"
# QML_FOREIGN_METATYPES = "foreign/foreign_metatypes.json"
# QML_IMPORT_NAME = "QmlTypeRegistrarTest"
# QML_IMPORT_VERSION = "1.0"
# TEMPLATE = "app"

## Scopes:
#####################################################################

qt_extend_target(tst_qmltyperegistrar CONDITION CMAKE_BUILD_TYPE STREQUAL Release AND debug_and_release
    PUBLIC_LIBRARIES
        # Remove: Lforeign/release
        foreign
)

qt_extend_target(tst_qmltyperegistrar CONDITION debug_and_release AND NOT CMAKE_BUILD_TYPE STREQUAL Release
    PUBLIC_LIBRARIES
        # Remove: Lforeign/debug
        foreign
)

qt_extend_target(tst_qmltyperegistrar CONDITION NOT debug_and_release
    PUBLIC_LIBRARIES
        # Remove: Lforeign
        foreign
)

set_target_properties(tst_qmltyperegistrar PROPERTIES
    QT_QML_MODULE_INSTALL_QMLTYPES TRUE
    QT_QML_MODULE_VERSION 1.0
    QT_QML_MODULE_URI QmlTypeRegistrarTest
)

qt5_qml_type_registration(tst_qmltyperegistrar)
add_subdirectory(foreign)
