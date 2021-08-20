@echo off
clang-format.exe -i %1.cpp
@echo off 
g++.exe -O3 -o %1.exe %1.cpp
