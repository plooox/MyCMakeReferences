cmake_minimum_required(VERSION 3.28)

project(basic
        LANGUAGES CXX
        VERSION 0.0.1
)

# Add ./include
include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)