# Step 2: Adding a Library
## Creating a Library (1 ~ 6)
- `add_library()`: Add a library to the project using the specified src
- `add_subdirectory()`: Add a subdirectory to the build
- `target_include_directories()`
- `target_link_libraries()`
## Adding a option (7 ~ 14)
> MathFunction library can select square root implementation(custom/standard) using option. 
- `option(<var> [value(ON/OFF)])`: Provide boolean option
- `target_compile_definitions()`: Specifies compile definitions
    - `target_compile_definitions(MathFunctions PRIVATE USE_MYMATH)`: source code(`mysqrt.cpp`) is compiled with definition (`-DUSE_MYMATH`)

--- 
- https://cmake.org/cmake/help/latest/guide/tutorial/Adding%20a%20Library.html
