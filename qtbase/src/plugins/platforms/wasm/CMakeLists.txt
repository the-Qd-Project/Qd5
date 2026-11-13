# Generated from wasm.pro.

#####################################################################
## QWasmIntegrationPlugin Plugin:
#####################################################################

qt_add_plugin(QWasmIntegrationPlugin
    OUTPUT_NAME qwasm
    TYPE platforms
    DEFAULT_IF ${QT_QPA_DEFAULT_PLATFORM} MATCHES wasm # special case
    STATIC
    SOURCES
        main.cpp
        qwasmclipboard.cpp qwasmclipboard.h
        qwasmcompositor.cpp qwasmcompositor.h
        qwasmcursor.cpp qwasmcursor.h
        qwasmeventdispatcher.cpp qwasmeventdispatcher.h
        qwasmeventtranslator.cpp qwasmeventtranslator.h
        qwasmfontdatabase.cpp qwasmfontdatabase.h
        qwasmintegration.cpp qwasmintegration.h
        qwasmoffscreensurface.cpp qwasmoffscreensurface.h
        qwasmopenglcontext.cpp qwasmopenglcontext.h
        qwasmscreen.cpp qwasmscreen.h
        qwasmservices.cpp qwasmservices.h
        qwasmstring.cpp qwasmstring.h
        qwasmstylepixmaps_p.h
        qwasmtheme.cpp qwasmtheme.h
        qwasmwindow.cpp qwasmwindow.h
    DEFINES
        QT_EGL_NO_X11
        QT_NO_FOREACH
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::EglSupportPrivate
        Qt::EventDispatcherSupportPrivate
        Qt::FontDatabaseSupportPrivate
        Qt::Gui
        Qt::GuiPrivate
)

# Resources:
set(qmake_wasmfonts_resource_files
    "../../../3rdparty/wasm/DejaVuSans.ttf"
    "../../../3rdparty/wasm/DejaVuSansMono.ttf"
    "../../../3rdparty/wasm/Vera.ttf"
)

qt_add_resource(QWasmIntegrationPlugin "qmake_wasmfonts"
    PREFIX
        "/fonts"
    BASE
        "${CMAKE_CURRENT_BINARY_DIR}/../../../3rdparty/wasm"
    FILES
        ${qmake_wasmfonts_resource_files}
)


#### Keys ignored in scope 1:.:.:wasm.pro:<TRUE>:
# INSTALLS = "shell_files"
# OTHER_FILES = "wasm.json" "wasm_shell.html" "qtloader.js"
# shell_files.files = "wasm_shell.html" "qtloader.js" "qtlogo.svg"
# shell_files.path = "$$[QT_INSTALL_PLUGINS]/platforms"

## Scopes:
#####################################################################

qt_extend_target(QWasmIntegrationPlugin CONDITION QT_FEATURE_opengl
    SOURCES
        qwasmbackingstore.cpp qwasmbackingstore.h
)

#### Keys ignored in scope 3:.:.:wasm.pro:NOT TARGET___equals____ss_QT_DEFAULT_QPA_PLUGIN:
# PLUGIN_EXTENDS = "-"
