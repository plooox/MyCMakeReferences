# My CMake Reference

> References for CMake

## CMake CLI
- `-B <path-to-build>` 
    - Path to directory which CMake will use as the root of build directory
- `-G <generator-name>`
    - Specify a build system generator(ex- Ninja, Unix Makefile...)
- `-D<var>{:<type>}=<value>`
    - Define variable 
    - Create or update a CMake CACHE entry 
- `-S <path-to-source>` 
    - Path to root directory of the CMake project to build
- `--build <dir>`
    - Project binary directory to be built
    - This is required (unless a preset is specified) and must be first
- `-t <tgt>, --target <tgt>`
    - Build `<tgt>` instead of the default target

### example
```bash
# Src: cwd, Build: build
cmake -B build

# Src: src, Build: build
cmake -S src -B build

# Src: src, Build: cwd
cmake -S src
```

---
- [cmake.org](https://cmake.org/cmake/help/latest/index.html#)
- 