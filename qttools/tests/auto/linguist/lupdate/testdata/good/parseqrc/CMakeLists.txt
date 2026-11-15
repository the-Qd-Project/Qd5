# Generated from project.pro.

#####################################################################
## project Binary:
#####################################################################

qt_add_executable(project
    GUI
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(project_resource_files
    "main.js"
)

qt_add_resource(project "project"
    PREFIX
        "/"
    FILES
        ${project_resource_files}
)
set(qmake_immediate_resource_files
    "main.qml"
)

qt_add_resource(project "qmake_immediate"
    PREFIX
        "/"
    FILES
        ${qmake_immediate_resource_files}
)


#### Keys ignored in scope 1:.:.:project.pro:<TRUE>:
# TRANSLATIONS = "project.ts"
