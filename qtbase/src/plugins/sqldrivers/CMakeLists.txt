# Generated from sqldrivers.pro.

# special case begin
# Currently handled completely manually.

# TODO sqldrivers_standalone {
#     _QMAKE_CACHE_ = $$shadowed($$SQLDRV_SRC_TREE)/.qmake.conf
#     load(qt_configure)
# }

qt_feature_module_begin(
    NO_MODULE
    PUBLIC_FILE "qtsqldrivers-config.h"
    PRIVATE_FILE "qtsqldrivers-config_p.h"
)
include(configure.cmake)
qt_feature_module_end(NO_MODULE)

if(QT_FEATURE_sql_db2)
    add_subdirectory(db2)
endif()

if(QT_FEATURE_sql_ibase)
    add_subdirectory(ibase)
endif()

if(QT_FEATURE_sql_mysql)
    add_subdirectory(mysql)
endif()

if(QT_FEATURE_sql_oci)
    add_subdirectory(oci)
endif()

if(QT_FEATURE_sql_odbc)
    add_subdirectory(odbc)
endif()

if(QT_FEATURE_sql_psql)
    add_subdirectory(psql)
endif()

if(QT_FEATURE_sql_sqlite)
    add_subdirectory(sqlite)
endif()

if(QT_FEATURE_sql_sqlite2)
    add_subdirectory(sqlite2)
endif()

if(QT_FEATURE_sql_tds)
    add_subdirectory(tds)
endif()
# special case end
