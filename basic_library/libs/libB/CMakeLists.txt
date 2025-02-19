add_library(libB
    STATIC
    src/libB.cpp
)

target_include_directories(libB
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

