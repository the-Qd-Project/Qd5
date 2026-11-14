# Generated from d3d12.pro.

cmake_minimum_required(VERSION 3.14.0)
project(config_test_d3d12 LANGUAGES CXX)

add_executable(${PROJECT_NAME}
    d3d12.cpp
)
target_link_libraries(${PROJECT_NAME} PUBLIC
    d3d12
    d3dcompiler
    dcomp
    dxgi
)
