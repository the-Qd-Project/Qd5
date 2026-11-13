# Generated from qthreadstorage.pro.

add_subdirectory(test)
if(NOT ANDROID AND NOT WINRT)
    add_subdirectory(crashonexit)
endif()
