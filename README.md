# Small project to help my son get started in C++ using a TUI

# Steps

## Requirements
- Conan (C++ Package Manager)
- After installing/updating Conan run this command:
```bash
conan profile detect --force
```
- CMake

## Install the dependencies
```bash
conan install . --build=missing
```

## Generate using the conan_toolchain.txt file
```bash
cmake -DCMAKE_TOOLCHAIN_FILE=build/Release/generators/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
```

## Build
```bash
make
```

## Run
```bash
./meinkraft
```
