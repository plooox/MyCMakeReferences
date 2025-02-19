# Step 1: A Basic Starting Point
## Building a Basic Project (1 ~ 3)
- `cmake_minimum_required()`: Specifying a minimum CMake version
- `project()`: Set the project name
- `add_executable()`: Create an executable using specified src

```
$ cmake -S . -B build
$ cmake --build build
$ ./build/Tutorial 4294967296
The square root of 4.29497e+09 is 65536
```

## Specifying the C++ Standard (4 ~ 6)
- `CMAKE_CXX_STANDARD`
- `CMAKE_CXX_STANDARD_REQUIRED`

## Adding a Version Number and Configured Header File (7 ~ 12)
> Print the project version using a variable that is defined in `CMakeLists.txt`

### `configure_file(<input> <output>)`
- Copies an `<input>` file to an `<output>` file while performing transformations of the input file content.
- transformations
    - CMakeFile content: `@VAR@`, `${VAR}`, `$CACHE{VAR}`
    - Enviroment variables: `$ENV{VAR}`



