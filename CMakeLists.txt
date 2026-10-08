cmake_minimum_required(VERSION 3.20)
project(rexglue_textures LANGUAGES CXX)

if(WIN32)
    set(REXGLUE_TEXTURES_MATH src/core/math_msvc.cpp)
else()
    set(REXGLUE_TEXTURES_MATH src/core/math_gcc.cpp)
endif()

add_library(rexglue_textures STATIC
    src/graphics/pipeline/texture/util.cpp
    src/graphics/pipeline/texture/info_formats.cpp
    ${REXGLUE_TEXTURES_MATH})
# shim/ comes first: its rex/memory.h stands in for the SDK's.
target_include_directories(rexglue_textures PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/shim"
    "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_compile_features(rexglue_textures PUBLIC cxx_std_23)   # ReXGlue uses std::byteswap
