# Generated from qml.pro.

if(TARGET Qt::QmlDevTools)
    add_subdirectory(qmlmin)
endif()
if(QT_FEATURE_private_tests)
    add_subdirectory(qqmlparser)
endif()
