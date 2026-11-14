# Generated from d3d12.pro.

#####################################################################
## QSGD3D12Adaptation Plugin:
#####################################################################

qt_add_plugin(QSGD3D12Adaptation
    OUTPUT_NAME qsgd3d12backend
    TYPE scenegraph
    SOURCES
        qsgd3d12adaptation.cpp qsgd3d12adaptation_p.h
        qsgd3d12builtinmaterials.cpp qsgd3d12builtinmaterials_p.h
        qsgd3d12context.cpp qsgd3d12context_p.h
        qsgd3d12engine.cpp qsgd3d12engine_p.h
        qsgd3d12engine_p_p.h
        qsgd3d12glyphcache.cpp qsgd3d12glyphcache_p.h
        qsgd3d12glyphnode.cpp qsgd3d12glyphnode_p.h
        qsgd3d12internalimagenode.cpp qsgd3d12internalimagenode_p.h
        qsgd3d12internalrectanglenode.cpp qsgd3d12internalrectanglenode_p.h
        qsgd3d12layer.cpp qsgd3d12layer_p.h
        qsgd3d12material.cpp qsgd3d12material_p.h
        qsgd3d12painternode.cpp qsgd3d12painternode_p.h
        qsgd3d12publicnodes.cpp qsgd3d12publicnodes_p.h
        qsgd3d12rendercontext.cpp qsgd3d12rendercontext_p.h
        qsgd3d12renderer.cpp qsgd3d12renderer_p.h
        qsgd3d12renderloop.cpp qsgd3d12renderloop_p.h
        qsgd3d12shadereffectnode.cpp qsgd3d12shadereffectnode_p.h
        qsgd3d12spritenode.cpp qsgd3d12spritenode_p.h
        qsgd3d12texture.cpp qsgd3d12texture_p.h
        qsgd3d12threadedrenderloop.cpp qsgd3d12threadedrenderloop_p.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::QmlPrivate
        Qt::QuickPrivate
        d3d12
        d3dcompiler
        dcomp
        dxgi
    NO_PCH_SOURCES
        "$$PWD/qsgd3d12engine.cpp"
)

#### Keys ignored in scope 1:.:.:d3d12.pro:<TRUE>:
# OTHER_FILES = "$$PWD/d3d12.json"
# QMAKE_TARGET_DESCRIPTION = "Quick D3D12 Renderer for Qt."
# QMAKE_TARGET_PRODUCT = "Qt Quick D3D12 Renderer (Qt $$QT_VERSION)"

## Scopes:
#####################################################################

qt_extend_target(QSGD3D12Adaptation CONDITION CMAKE_BUILD_TYPE STREQUAL Debug AND debug_and_release
    INCLUDE_DIRECTORIES
        ${CMAKE_CURRENT_BINARY_DIR}/../../../quick/.tracegen/debug
)

qt_extend_target(QSGD3D12Adaptation CONDITION debug_and_release AND NOT CMAKE_BUILD_TYPE STREQUAL Debug
    INCLUDE_DIRECTORIES
        ${CMAKE_CURRENT_BINARY_DIR}/../../../quick/.tracegen/release
)

qt_extend_target(QSGD3D12Adaptation CONDITION NOT debug_and_release
    INCLUDE_DIRECTORIES
        ${CMAKE_CURRENT_BINARY_DIR}/../../../quick/.tracegen
)
