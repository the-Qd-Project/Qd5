# Generated from qmimedatabase-cache-fdoxml.pro.

if(NOT QT_FEATURE_private_tests)
    return()
endif()

#####################################################################
## tst_qmimedatabase-cache-fdoxml Test:
#####################################################################

qt_add_test(tst_qmimedatabase-cache-fdoxml
    SOURCES
        ../tst_qmimedatabase.h
        tst_qmimedatabase-cache-fdoxml.cpp
    PUBLIC_LIBRARIES
        Qt::Concurrent
)

# Resources:
set_source_files_properties("/home/samet/qd/qd5/qtbase/src/corelib/mimetypes/3rdparty/tika-mimetypes.xml"
    PROPERTIES QT_RESOURCE_ALIAS "tika-mimetypes.xml"
)
set(mimetypes_resource_files
    "3rdparty/tika-mimetypes.xml"
)

qt_add_resource(tst_qmimedatabase-cache-fdoxml "mimetypes"
    PREFIX
        "/qt-project.org/qmime/tika/packages"
    BASE
        "/home/samet/qd/qd5/qtbase/src/corelib/mimetypes"
    FILES
        ${mimetypes_resource_files}
)
set_source_files_properties("../invalid-magic1.xml"
    PROPERTIES QT_RESOURCE_ALIAS "invalid-magic1.xml"
)
set_source_files_properties("../invalid-magic2.xml"
    PROPERTIES QT_RESOURCE_ALIAS "invalid-magic2.xml"
)
set_source_files_properties("../invalid-magic3.xml"
    PROPERTIES QT_RESOURCE_ALIAS "invalid-magic3.xml"
)
set_source_files_properties("../magic-and-hierarchy.foo"
    PROPERTIES QT_RESOURCE_ALIAS "magic-and-hierarchy.foo"
)
set_source_files_properties("../magic-and-hierarchy.xml"
    PROPERTIES QT_RESOURCE_ALIAS "magic-and-hierarchy.xml"
)
set_source_files_properties("../magic-and-hierarchy2.foo"
    PROPERTIES QT_RESOURCE_ALIAS "magic-and-hierarchy2.foo"
)
set_source_files_properties("../qml-again.xml"
    PROPERTIES QT_RESOURCE_ALIAS "qml-again.xml"
)
set_source_files_properties("../test.qml"
    PROPERTIES QT_RESOURCE_ALIAS "test.qml"
)
set_source_files_properties("../text-x-objcsrc.xml"
    PROPERTIES QT_RESOURCE_ALIAS "text-x-objcsrc.xml"
)
set_source_files_properties("../yast2-metapackage-handler-mimetypes.xml"
    PROPERTIES QT_RESOURCE_ALIAS "yast2-metapackage-handler-mimetypes.xml"
)
set(testdata_resource_files
    "invalid-magic1.xml"
    "invalid-magic2.xml"
    "invalid-magic3.xml"
    "magic-and-hierarchy.foo"
    "magic-and-hierarchy.xml"
    "magic-and-hierarchy2.foo"
    "qml-again.xml"
    "test.qml"
    "text-x-objcsrc.xml"
    "yast2-metapackage-handler-mimetypes.xml"
)

qt_add_resource(tst_qmimedatabase-cache-fdoxml "testdata"
    PREFIX
        "/tst_qmimedatabase/qmime"
    BASE
        ".."
    FILES
        ${testdata_resource_files}
)
set_source_files_properties("../3rdparty/freedesktop.org.xml"
    PROPERTIES QT_RESOURCE_ALIAS "freedesktop.org.xml"
)
set(testdata-cache-fdoxml_resource_files
    "3rdparty/freedesktop.org.xml"
)

qt_add_resource(tst_qmimedatabase-cache-fdoxml "testdata-cache-fdoxml"
    PREFIX
        "/tst_qmimedatabase/qmime"
    BASE
        ".."
    FILES
        ${testdata-cache-fdoxml_resource_files}
)


#### Keys ignored in scope 1:.:.:qmimedatabase-cache-fdoxml.pro:<TRUE>:
# _REQUIREMENTS = "qtConfig(private_tests)"

## Scopes:
#####################################################################

qt_extend_target(tst_qmimedatabase-cache-fdoxml CONDITION GCC
    COMPILE_OPTIONS
        -W
        -Wall
        -Wextra
        -Wno-long-long
        -Wnon-virtual-dtor
        -Wshadow
)

qt_extend_target(tst_qmimedatabase-cache-fdoxml CONDITION UNIX AND NOT APPLE AND NOT QNX
    DEFINES
        USE_XDG_DATA_DIRS
)
