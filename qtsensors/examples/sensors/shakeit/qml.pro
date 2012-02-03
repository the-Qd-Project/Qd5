TEMPLATE = aux

app.files = \
    info.json \
    notions.json \
    settings.json \
    shakeit.qml \
    icon.png \
    audio \
    images

!isEmpty(EXAMPLES_PREFIX) {
    TARGET_DIR = $$EXAMPLES_PREFIX/com.nokia.mt.shakeit
    app.path = $$TARGET_DIR
    INSTALLS = app
}

