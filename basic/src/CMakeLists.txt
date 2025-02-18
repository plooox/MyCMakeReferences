cmake_minimum_required(VERSION 3.28)

add_executable( main
                main.cpp
)

target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/include)
