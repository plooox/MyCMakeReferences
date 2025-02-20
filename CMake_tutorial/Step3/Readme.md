# Adding Usage Requirements for a Library
## Usage Requirements
- Settings that propagate to consumers linking to the target via `target_link_libraries()`, ensuring correct compilation and linking
- Allow for better control over a library/binary's linkage
- Primary commands
    - `target_compile_definitions()`
    - `target_compile_options()`
    - `target_include_directories()`
    - `target_link_directories()`
    - `target_link_options()`
    - `target_precompile_headers()`
    - `target_sources()`

## Refactoring Step2
### Adding Usage Requirements for a Library (1 ~ 3)
- A library defines its own usage requirements so they are transitively passed to other targets as needed
    - `MathFunctions` will specify any needed include directories itself
    - The consuming target(`Tutorial`) simply needs to link to `MathFunctions` without worrying about additional include directories
- `INTERFACE`: Properties that consumers require but the producer does not
- Refactoring so that the only thing the executable target needs to do to use the library is call `target_link_libraries()` with the library target's name.

### Setting the C++ Standard with Interface Libraries(4 ~ 7)
- A modern technique to set properties to multiple targets
- Refactoring code to use an `INTERFACE` library to specify the C++ standard.
- Disadventage of `set(CMAKE_CXXSTANDARD 11)`
    - Global setting -> Low flexibility
- Adventages of interface library
    - Target based setting -> High flexibility
        - Improved compatibility with build systems
    - Recommended practice in modern CMake

---
- [CMake Tutorial Stpe3](https://cmake.org/cmake/help/latest/guide/tutorial/Adding%20a%20Library.html)
