# Generated from sqlite2.pro.

#####################################################################
## QSQLite2DriverPlugin Plugin:
#####################################################################

qt_add_plugin(QSQLite2DriverPlugin
    OUTPUT_NAME qsqlite2
    TYPE sqldrivers
    SOURCES
        qsql_sqlite2.cpp qsql_sqlite2_p.h
        smain.cpp
    DEFINES
        QT_NO_CAST_FROM_ASCII
        QT_NO_CAST_TO_ASCII
    LIBRARIES
        SQLite::SQLite2
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::SqlPrivate
)

#### Keys ignored in scope 1:.:.:sqlite2.pro:<TRUE>:
# OTHER_FILES = "sqlite2.json"
