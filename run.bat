@echo off
echo Building %1.cpp into %1.exe
@echo off 
g++.exe -O3 -s -o %1.exe %1.cpp
