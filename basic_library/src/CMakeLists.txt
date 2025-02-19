add_executable(basic_library
    main.cpp
)

target_include_directories(basic_library
    PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/libs/libA/include
    ${CMAKE_SOURCE_DIR}/libs/libA/include
)

target_link_libraries(basic_library
    PRIVATE
    libA
    libB
)