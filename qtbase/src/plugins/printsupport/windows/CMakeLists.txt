# Generated from windows.pro.

#####################################################################
## QWindowsPrinterSupportPlugin Plugin:
#####################################################################

qt_add_plugin(QWindowsPrinterSupportPlugin
    OUTPUT_NAME windowsprintersupport
    TYPE printsupport
    SOURCES
        main.cpp
        qwindowsprintdevice.cpp qwindowsprintdevice.h
        qwindowsprintersupport.cpp qwindowsprintersupport.h
    INCLUDE_DIRECTORIES
        ${QT_SOURCE_TREE}/src/printsupport/kernel
    LIBRARIES
        gdi32
        user32
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::PrintSupportPrivate
        comdlg32
        winspool
)

#### Keys ignored in scope 1:.:.:windows.pro:<TRUE>:
# MODULE = "windowsprintersupport"
# OTHER_FILES = "windows.json"
