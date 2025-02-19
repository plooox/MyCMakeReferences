cmake_minimum_required(VERSION 3.28)

project(basic_library
        LANGUAGES CXX
        VERSION 0.0.1
)

# Option1) add parent library folder
add_subdirectory(libs)          

# Option2) add child library folder directly
# add_subdirectory(libs/libA)   
# add_subdirectory(libs/libB)

add_subdirectory(src)
