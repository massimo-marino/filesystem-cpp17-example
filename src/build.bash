#!/bin/bash
#
# Assume clang is installed in /clang-12.0.0
#
clang++ -v -std=c++17 -stdlib=libc++ main.cpp -L/clang_12.0.0/lib -o cpp17test
