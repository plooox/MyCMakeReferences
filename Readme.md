# My CMake Reference

> References for CMake

## CMake CLI
### Generate a Project Buildsystem
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

```bash
# Src: cwd, Build: build
cmake -B build

# Src: src, Build: build
cmake -S src -B build

# Src: src, Build: cwd
cmake -S src

# Generate for Ninja
cmake -B build -G Ninja
```

## Build a Project
- `--build <dir>`
    - Project binary directory to be built
- `--prefix <prefix>`
    - Override the installation prefix
- `-j <jobs>, --parallel <jobs>`
    - The maximum number of concurrent processes to use when building
- `--config <cfg>`

```
cmake --build build  
cmake --build build --j 4               # Concurrency (job 4)
cmake --build build --target install    # Install when build is success
cmake --build build --config debug      # Build debug mode
```

## Install a Project
- `--install <dir>`
    - Project binary directory to install
- `--prefix <prefix>`
    - Override the installation prefix
- `-j <jobs>, --parallel <jobs>`
    - The maximum number of concurrent processes to use when building

---
- [cmake.org](https://cmake.org/cmake/help/latest/index.html#)
- 