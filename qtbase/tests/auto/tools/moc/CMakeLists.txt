# Generated from moc.pro.

#####################################################################
## tst_moc Test:
#####################################################################

qt_add_test(tst_moc
    SOURCES
        backslash-newlines.h
        c-comments.h
        cstyle-enums.h
        cxx-attributes.h
        cxx11-enums.h
        cxx11-explicit-override-control.h
        cxx11-final-classes.h
        cxx11-trailing-return.h
        cxx17-namespaces.h
        dir-in-include-path.h
        enum_inc.h
        enum_with_include.h
        escapes-in-string-literals.h
        forward-declared-param.h
        function-with-attributes.h
        gadgetwithnoenums.h
        grand-parent-gadget-class.h
        namespace.h
        namespaced-flags.h
        no-keywords.h
        non-gadget-parent-class.h
        oldstyle-casts.h
        parse-defines.h
        plugin_metadata.h
        pure-virtual-signals.h
        qinvokable.h
        qprivateslots.h
        qtbug-35657-gadget.h
        related-metaobjects-in-gadget.h
        related-metaobjects-in-namespaces.h
        related-metaobjects-name-conflict.h
        single-quote-digit-separator-n3781.h
        single_function_keyword.h
        slots-with-void-template.h
        task189996.h
        task192552.h
        task234909.h
        task240368.h
        task87883.h
        trigraphs.h
        tst_moc.cpp
        using-namespaces.h
    INCLUDE_DIRECTORIES
        testproject
        testproject/include
    MOC_OPTIONS
        "-Muri=com.company.app"
        "-Muri=com.company.app.private"
        "-DDEFINE_CMDLINE_EMPTY="
        ""-DDEFINE_CMDLINE_SIGNAL=void cmdlineSignal(const QMap<int, int> &i)""
        "--output-json"
)
#### Ignored generated resource: ${CMAKE_CURRENT_BINARY_DIR}/allmocs.qrc
#### Keys ignored in scope 1:.:.:moc.pro:<TRUE>:
# BASELINE_IN = "allmocs_baseline_in.json"
# JSON_HEADERS = "$$HEADERS" "-cxx-attributes.h" "-enum_inc.h"
# QMAKE_EXTRA_COMPILERS = "moc_json_header" "copy_baseline" "jsoncollector"
# allmocs_contents = "<!DOCTYPE RCC><RCC version="1.0">" "<qresource prefix="/">" "<file>allmocs.json</file>" "<file>allmocs_baseline.json</file>" "</qresource>" "</RCC>"
# copy_baseline.CONFIG = "no_link"
# copy_baseline.commands = "$${QMAKE_COPY}" "$$shell_path(${QMAKE_FILE_NAME})" "${QMAKE_FILE_OUT}"
# copy_baseline.input = "BASELINE_IN"
# copy_baseline.output = "$$OUT_PWD/allmocs_baseline.json"
# jsoncollector.CONFIG = "combine"
# jsoncollector.commands = "$$MOC_COLLECT_JSON" "--collect-json" "-o" "${QMAKE_FILE_OUT}" "${QMAKE_FILE_IN}"
# jsoncollector.input = "MOC_JSON_HEADERS"
# jsoncollector.output = "$$OUT_PWD/allmocs.json"
# jsoncollector.variable_out = "GENERATED_FILES"
# moc_json_header.CONFIG = "no_link" "moc_verify"
# moc_json_header.commands = "$$escape_expand(\\n)"
# moc_json_header.depends = "$$MOC_CPP_DIR/$${QMAKE_H_MOD_MOC}${QMAKE_FILE_BASE}$${firstQMAKE_EXT_CPP}"
# moc_json_header.input = "JSON_HEADERS"
# moc_json_header.output = "$$MOC_CPP_DIR/$${QMAKE_H_MOD_MOC}${QMAKE_FILE_BASE}$${firstQMAKE_EXT_CPP}.json"
# moc_json_header.variable_out = "MOC_JSON_HEADERS"

## Scopes:
#####################################################################

qt_extend_target(tst_moc CONDITION CMAKE_CROSSCOMPILING
    DEFINES
        MOC_CROSS_COMPILED
)

qt_extend_target(tst_moc CONDITION UNIX AND (CLANG OR GCC OR ICC)
    SOURCES
        os9-newlines.h
        win-newlines.h
)

qt_extend_target(tst_moc CONDITION CLANG OR GCC
    SOURCES
        dollars.h
)

qt_extend_target(tst_moc CONDITION TARGET Qt::DBus
    PUBLIC_LIBRARIES
        Qt::DBus
)

qt_extend_target(tst_moc CONDITION TARGET Qt::Concurrent
    PUBLIC_LIBRARIES
        Qt::Concurrent
)

qt_extend_target(tst_moc CONDITION TARGET Qt::Network
    PUBLIC_LIBRARIES
        Qt::Network
)

qt_extend_target(tst_moc CONDITION TARGET Qt::Sql
    PUBLIC_LIBRARIES
        Qt::Sql
)

#### Keys ignored in scope 10:.:.:moc.pro:(CMAKE_BUILD_TYPE STREQUAL Debug):
# MOC_CPP_DIR = "$$MOC_DIR/debug"

#### Keys ignored in scope 11:.:.:moc.pro:else:
# MOC_CPP_DIR = "$$MOC_DIR/release"

#### Keys ignored in scope 12:.:.:moc.pro:else:
# MOC_CPP_DIR = "$$MOC_DIR"
