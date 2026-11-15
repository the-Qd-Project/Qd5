# Generated from qsplashscreen.pro.

#####################################################################
## qsplashscreen Binary:
#####################################################################

qt_add_executable(qsplashscreen
    GUI
    SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
set(qsplashscreen_resource_files
    "splash.png"
)

qt_add_resource(qsplashscreen "qsplashscreen"
    PREFIX
        "/"
    FILES
        ${qsplashscreen_resource_files}
)

