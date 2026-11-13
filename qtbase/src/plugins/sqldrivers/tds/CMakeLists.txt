# Generated from tds.pro.

#####################################################################
## QTDSDriverPlugin Plugin:
#####################################################################

qt_add_plugin(QTDSDriverPlugin
    OUTPUT_NAME qsqltds
    TYPE sqldrivers
    SOURCES
        main.cpp
        qsql_tds.cpp qsql_tds_p.h
    DEFINES
        QT_NO_CAST_FROM_ASCII
        QT_NO_CAST_TO_ASCII
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::SqlPrivate
        tds
)

#### Keys ignored in scope 1:.:.:tds.pro:<TRUE>:
# OTHER_FILES = "tds.json"
