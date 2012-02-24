TEMPLATE = aux

app.files = \
    info.json \
    shakeit.qml \
    icon.png \
    audio \
    images

!isEmpty(EXAMPLES_PREFIX) {
    app.path = $$EXAMPLES_PREFIX/com.nokia.mt.shakeit
    INSTALLS = app
}

