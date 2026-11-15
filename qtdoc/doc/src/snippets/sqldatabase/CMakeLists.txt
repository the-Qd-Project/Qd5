# Generated from sqldatabase.pro.

#####################################################################
## sqldatabase Binary:
#####################################################################

qt_add_executable(sqldatabase
    GUI
    SOURCES
        sqldatabase.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::Sql
)
