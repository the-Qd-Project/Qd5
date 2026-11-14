# Generated from moc.pro.

#####################################################################
## tst_moc Test:
#####################################################################

add_qt_test(tst_moc
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
        "-DDEFINE_CMDLINE_SIGNAL=void cmdlineSignal ( const QMap<int, int> &i )"
        "--output-json"
    EXCEPTIONS
)

qt_manual_moc(comparison_relevant_moc_list
    backslash-newlines.h
    c-comments.h
    cstyle-enums.h
    cxx11-enums.h
    cxx11-explicit-override-control.h
    cxx11-final-classes.h
    cxx11-trailing-return.h
    cxx17-namespaces.h
    escapes-in-string-literals.h
    enum_with_include.h
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
    slots-with-void-template.h
    task192552.h
    task234909.h
    task240368.h
    task87883.h
    trigraphs.h
    using-namespaces.h

    FLAGS
        "-Muri=com.company.app"
        "-Muri=com.company.app.private"
        "-DDEFINE_CMDLINE_EMPTY="
        "-DDEFINE_CMDLINE_SIGNAL=void cmdlineSignal(const QMap<int, int> &i)"
        "--output-json"

    OUTPUT_MOC_JSON_FILES moc_json_files
)

target_sources(tst_moc PRIVATE ${comparison_relevant_moc_list})

qt_extend_target(tst_moc LIBRARIES Qt::CorePrivate)

if(UNIX AND (CLANG OR GCC OR ICC))
    qt_manual_moc(os9_newlines_moc
        os9-newlines.h
    )

    target_sources(tst_moc PRIVATE ${os9_newlines_moc})
endif()

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

set(comparison_relevant_moc_headers
    backslash-newlines.h
    c-comments.h
    cstyle-enums.h
    cxx11-enums.h
    cxx11-explicit-override-control.h
    cxx11-final-classes.h
    cxx11-trailing-return.h
    cxx17-namespaces.h
    escapes-in-string-literals.h
    enum_with_include.h
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
    slots-with-void-template.h
    task192552.h
    task234909.h
    task240368.h
    task87883.h
    trigraphs.h
    using-namespaces.h
)

set_source_files_properties(${comparison_relevant_moc_headers}
    PROPERTIES SKIP_AUTOMOC ON
)

if(UNIX AND (CLANG OR GCC OR ICC))
    set_source_files_properties(os9-newlines.h
        PROPERTIES SKIP_AUTOMOC ON
    )
endif()
