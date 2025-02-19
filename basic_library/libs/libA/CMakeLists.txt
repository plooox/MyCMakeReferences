add_library(libA 
    STATIC
    src/libA.cpp
)

target_include_directories(libA
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

