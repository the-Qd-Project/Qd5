# Generated from json.pro.

#####################################################################
## tst_json Test:
#####################################################################

qt_add_test(tst_json
    SOURCES
        tst_qtjson.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
)

## Scopes:
#####################################################################

#### Keys ignored in scope 3:.:.:json.pro:NOT ANDROID:
# TESTDATA = "bom.json" "test.json" "test.bjson" "test3.json" "test2.json"

if(ANDROID)
    # Resources:
    set(json_resource_files
        "bom.json"
        "test.bjson"
        "test.json"
        "test2.json"
        "test3.json"
    )

    qt_add_resource(tst_json "json"
        PREFIX
            "/"
        FILES
            ${json_resource_files}
    )
endif()
