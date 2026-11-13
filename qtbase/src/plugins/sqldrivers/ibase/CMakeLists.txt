# Generated from ibase.pro.

#####################################################################
## QIBaseDriverPlugin Plugin:
#####################################################################

qt_add_plugin(QIBaseDriverPlugin
    OUTPUT_NAME qsqlibase
    TYPE sqldrivers
    SOURCES
        main.cpp
        qsql_ibase.cpp qsql_ibase_p.h
    DEFINES
        QT_NO_CAST_FROM_ASCII
        QT_NO_CAST_TO_ASCII
    LIBRARIES
        iBase::iBase
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::SqlPrivate
)

#### Keys ignored in scope 1:.:.:ibase.pro:<TRUE>:
# OTHER_FILES = "ibase.json"
