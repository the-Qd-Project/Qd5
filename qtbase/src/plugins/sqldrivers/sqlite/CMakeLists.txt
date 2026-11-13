# Generated from sqlite.pro.

#####################################################################
## QSQLiteDriverPlugin Plugin:
#####################################################################

qt_add_plugin(QSQLiteDriverPlugin
    OUTPUT_NAME qsqlite
    TYPE sqldrivers
    SOURCES
        qsql_sqlite.cpp qsql_sqlite_p.h
        smain.cpp
    DEFINES
        QT_NO_CAST_FROM_ASCII
        QT_NO_CAST_TO_ASCII
    LIBRARIES # special case
        SQLite::SQLite3 # special case
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::SqlPrivate
)
