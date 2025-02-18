cmake_minimum_required(VERSION 3.28)

project(cur_project
        LANGUAGES CXX
        VERSION 0.0.1
)

add_executable( main
                main.cpp
)

add_subdirectory( ../out_project    # source directory (relative path)
                  ./build_out       # build output (${build}/build_out)
)