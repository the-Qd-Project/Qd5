# Generated from qresourceengine_test.pro.

add_subdirectory(staticplugin)

#####################################################################
## tst_qresourceengine Test:
#####################################################################

# Collect test data
list(APPEND test_data "parentdir.txt")
file(GLOB_RECURSE test_data_glob
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    testqrc/*)
list(APPEND test_data ${test_data_glob})
file(GLOB_RECURSE test_data_glob
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    *.rcc)
list(APPEND test_data ${test_data_glob})

add_qt_test(tst_qresourceengine
    SOURCES
        tst_qresourceengine.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        moctestplugin
    TESTDATA ${test_data}
)

# Resources:
set(test_resource_files
    "../parentdir.txt"
    "./currentdir2.txt"
    "currentdir.txt"
    "subdir/subdir.txt"
)

qt_add_resource(tst_qresourceengine "test"
    PREFIX
        "/test/abc/123/+++"
    BASE
        "testqrc"
    FILES
        ${test_resource_files}
)
set(test1_resource_files
    "search_file.txt"
    "searchpath1/search_file.txt"
    "searchpath2/search_file.txt"
)

qt_add_resource(tst_qresourceengine "test1"
    PREFIX
        "/"
    BASE
        "testqrc"
    FILES
        ${test1_resource_files}
)
set_source_files_properties("testqrc/test/testdir2.txt"
    PROPERTIES QT_RESOURCE_ALIAS "aliasdir/aliasdir.txt"
)
set(test2_resource_files
    "otherdir/otherdir.txt"
    "test/test"
    "test/testdir.txt"
    "test/testdir2.txt"
)

qt_add_resource(tst_qresourceengine "test2"
    PREFIX
        "/"
    BASE
        "testqrc"
    FILES
        ${test2_resource_files}
)
set(test3_resource_files
    "aliasdir/aliasdir.txt"
)

qt_add_resource(tst_qresourceengine "test3"
    LANG
        "ko"
    PREFIX
        "/"
    BASE
        "testqrc"
    FILES
        ${test3_resource_files}
)
set_source_files_properties("testqrc/aliasdir/compressme.txt"
    PROPERTIES QT_RESOURCE_ALIAS "aliasdir/aliasdir.txt"
)
set(test4_resource_files
    "aliasdir/compressme.txt"
)

qt_add_resource(tst_qresourceengine "test4"
    LANG
        "de_CH"
    PREFIX
        "/"
    BASE
        "testqrc"
    FILES
        ${test4_resource_files}
)
set_source_files_properties("testqrc/test/german.txt"
    PROPERTIES QT_RESOURCE_ALIAS "aliasdir/aliasdir.txt"
)
set(test5_resource_files
    "test/german.txt"
)

qt_add_resource(tst_qresourceengine "test5"
    LANG
        "de"
    PREFIX
        "/"
    BASE
        "testqrc"
    FILES
        ${test5_resource_files}
)
set(test6_resource_files
    "blahblah.txt"
)

qt_add_resource(tst_qresourceengine "test6"
    PREFIX
        "/withoutslashes"
    BASE
        "testqrc"
    FILES
        ${test6_resource_files}
)


#### Keys ignored in scope 1:.:.:qresourceengine_test.pro:<TRUE>:
# GENERATED_TESTDATA = "$${runtime_resource.target}"
# PRE_TARGETDEPS = "$${runtime_resource.target}"
# QMAKE_DISTCLEAN = "$${runtime_resource.target}"
# QMAKE_EXTRA_TARGETS = "runtime_resource"
# runtime_resource.commands = "$$QMAKE_RCC" "-root" "/runtime_resource/" "-binary" "$$PWD/testqrc/test.qrc" "-o" "$${runtime_resource.target}"
# runtime_resource.depends = "$$PWD/testqrc/test.qrc" "$$QMAKE_RCC_EXE"
# runtime_resource.target = "runtime_resource.rcc"

## Scopes:
#####################################################################

if(ANDROID AND NOT ANDROID_EMBEDDED)
    # Resources:
    set(android_testdata_resource_files
        "parentdir.txt"
        "runtime_resource.rcc"
        "testqrc/aliasdir/aliasdir.txt"
        "testqrc/aliasdir/compressme.txt"
        "testqrc/blahblah.txt"
        "testqrc/currentdir.txt"
        "testqrc/currentdir2.txt"
        "testqrc/otherdir/otherdir.txt"
        "testqrc/search_file.txt"
        "testqrc/searchpath1/search_file.txt"
        "testqrc/searchpath2/search_file.txt"
        "testqrc/subdir/subdir.txt"
        "testqrc/test/german.txt"
        "testqrc/test/test/test1.txt"
        "testqrc/test/test/test2.txt"
        "testqrc/test/testdir.txt"
        "testqrc/test/testdir2.txt"
    )

    qt_add_resource(tst_qresourceengine "android_testdata"
        PREFIX
            "/android_testdata"
        FILES
            ${android_testdata_resource_files}
    )
endif()

qt_extend_target(tst_qresourceengine CONDITION CMAKE_BUILD_TYPE STREQUAL Debug AND WIN32 AND debug_and_release
    PUBLIC_LIBRARIES
        # Remove: Lstaticplugin/debug
)

qt_extend_target(tst_qresourceengine CONDITION WIN32 AND debug_and_release AND NOT CMAKE_BUILD_TYPE STREQUAL Debug
    PUBLIC_LIBRARIES
        # Remove: Lstaticplugin/release
)

qt_extend_target(tst_qresourceengine CONDITION UNIX OR NOT debug_and_release
    PUBLIC_LIBRARIES
        # Remove: Lstaticplugin
)

qt_extend_target(tst_qresourceengine CONDITION builtin_testdata
    DEFINES
        BUILTIN_TESTDATA
)
