

#### Inputs



#### Libraries



#### Tests



#### Features

qt_feature("assistant" PRIVATE
    LABEL "Qt Assistant"
    PURPOSE "Qt Assistant is a tool for viewing on-line documentation in Qt help file format."
)
qt_feature("designer" PRIVATE
    LABEL "Qt Designer"
    PURPOSE "Qt Designer is the Qt tool for designing and building graphical user interfaces (GUIs) with Qt Widgets. You can compose and customize your windows or dialogs in a what-you-see-is-what-you-get (WYSIWYG) manner, and test them using different styles and resolutions."
)
qt_feature("distancefieldgenerator" PRIVATE
    LABEL "Qt Distance Field Generator"
    PURPOSE "The Qt Distance Field Generator tool can be used to pregenerate the font cache in order to optimize startup performance."
)
qt_feature("kmap2qmap" PRIVATE
    LABEL "kmap2qmap"
    PURPOSE "kmap2qmap is a tool to generate keymaps for use on Embedded Linux. The source files have to be in standard Linux kmap format that is e.g. understood by the kernel's loadkeys command."
)
qt_feature("linguist" PRIVATE
    LABEL "Qt Linguist"
    PURPOSE "Qt Linguist can be used by translator to translate text in Qt applications."
)
qt_feature("macdeployqt" PRIVATE
    LABEL "Mac Deployment Tool"
    PURPOSE "The Mac deployment tool automates the process of creating a deployable application bundle that contains the Qt libraries as private frameworks."
    CONDITION APPLE
)
qt_feature("makeqpf" PRIVATE
    LABEL "makeqpf"
    PURPOSE "makeqpf is a tool to generate pre-rendered fonts in QPF2 format for use on Embedded Linux."
)
qt_feature("pixeltool" PRIVATE
    LABEL "pixeltool"
    PURPOSE "The Qt Pixel Zooming Tool is a graphical application that magnifies the screen around the mouse pointer so you can look more closely at individual pixels."
)
qt_feature("qdbus" PRIVATE
    LABEL "qdbus"
    PURPOSE "qdbus is a communication interface for Qt-based applications."
)
qt_feature("qev" PRIVATE
    LABEL "qev"
    PURPOSE "qev allows introspection of incoming events for a QWidget, similar to the X11 xev tool."
)
qt_feature("qtattributionsscanner" PRIVATE
    LABEL "Qt Attributions Scanner"
    PURPOSE "Qt Attributions Scanner generates attribution documents for third-party code in Qt."
)
qt_feature("qtdiag" PRIVATE
    LABEL "qtdiag"
    PURPOSE "qtdiag outputs information about the Qt installation it was built with."
)
qt_feature("qtpaths" PRIVATE
    LABEL "qtpaths"
    PURPOSE "qtpaths is a command line client to QStandardPaths."
)
qt_feature("qtplugininfo" PRIVATE
    LABEL "qtplugininfo"
    PURPOSE "qtplugininfo dumps metadata about Qt plugins in JSON format."
)
qt_feature("windeployqt" PRIVATE
    LABEL "Windows deployment tool"
    PURPOSE "The Windows deployment tool is designed to automate the process of creating a deployable folder containing the Qt-related dependencies (libraries, QML imports, plugins, and translations) required to run the application from that folder. It creates a sandbox for Universal Windows Platform (UWP) or an installation tree for Windows desktop applications, which can be easily bundled into an installation package."
    CONDITION WIN32 OR WINRT
)
qt_feature("winrtrunner" PRIVATE
    LABEL "WinRT Runner Tool"
    PURPOSE "The WinRT Runner Tool installs, runs, and collects test results for packages made with Qt."
    CONDITION WINRT
)
