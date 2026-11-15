# Generated from i18n-non-qt-class.pro.

#####################################################################
## i18n-non-qt-class Binary:
#####################################################################

qt_add_executable(i18n-non-qt-class
    GUI
    SOURCES
        main.cpp
        myclass.cpp myclass.h
)

# Resources:
set(resources_resource_files
    "translations/i18n-non-qt-class_en.qm"
    "translations/i18n-non-qt-class_fr.qm"
)

qt_add_resource(i18n-non-qt-class "resources"
    PREFIX
        "/"
    FILES
        ${resources_resource_files}
)


#### Keys ignored in scope 1:.:.:i18n-non-qt-class.pro:<TRUE>:
# TRANSLATIONS = "translations/i18n-non-qt-class_en.ts" "translations/i18n-non-qt-class_fr.ts"
