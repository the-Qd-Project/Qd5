# Generated from qsslsocket.pro.

#####################################################################
## manual_qsslsocket Test:
#####################################################################

add_qt_test(manual_qsslsocket
    SOURCES
        main.cpp
    PUBLIC_LIBRARIES
        Qt::Network
)

if(TARGET manual_qsslsocket)
    set_target_properties(manual_qsslsocket PROPERTIES OUTPUT_NAME "tst_qsslsocket")
endif()
