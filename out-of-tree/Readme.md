# Build out-of-tree

## Structure
```
$ tree .
.
├── cur_project
│   ├── CMakeLists.txt
│   └── main.cpp
├── out_project
│   ├── CMakeLists.txt
│   └── main.cpp
└── Readme.md
```

## Output
```
~/cur_project$ cmake -S . -B build
~/cur_project$ cmake --build build

~/cur_project$ tree . -L 2
.
├── build
│   ├── build_out
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   ├── cmake_install.cmake
│   ├── main
│   └── Makefile
├── CMakeLists.txt
└── main.cpp
```
