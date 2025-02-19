# Basic library project
## Structure

```
$ tree basic_library/
basic_library/
├── CMakeLists.txt
├── include
│   └── common.hpp
├── libs
│   ├── CMakeLists.txt
│   ├── libA
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   │   └── libA.hpp
│   │   └── src
│   │       └── libA.cpp
│   └── libB
│       ├── CMakeLists.txt
│       ├── include
│       │   └── libB.hpp
│       └── src
│           └── libB.cpp
└── src
    ├── CMakeLists.txt
    └── main.cpp
```

## Commands
```
~library$ cmake -S . -B build
~library$ cmake --build build
```