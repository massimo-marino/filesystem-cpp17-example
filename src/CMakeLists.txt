cmake_minimum_required(VERSION 3.19)
project(cpp17_project)

SET (TARGET "cpp17_project")

SET (CMAKE_VERBOSE_MAKEFILE on)
SET (CMAKE_EXPORT_COMPILE_COMMANDS on)
SET (CMAKE_CXX_COMPILER "/clang_12.0.0/bin/clang++") # assume clang is installed in /clang_12.0.0
SET (CMAKE_CXX_STANDARD 17)
INCLUDE_DIRECTORIES(".")  # /clang_12.0.0/include
SET (CLANG_CXX_FLAGS "-stdlib=libc++ -pthread -pedantic -pedantic-errors -Wall -mtune=native -march=native -m64")
SET (CMAKE_CXX_FLAGS "${CLANG_CXX_FLAGS}")

ADD_EXECUTABLE(${TARGET} main.cpp)
TARGET_LINK_OPTIONS(${TARGET} PUBLIC -L/clang_12.0.0/lib -lm -lrt -lpthread) # -lm ..., -lpthread, not needed; just added as an example
