@echo off
echo New Competitive File Creator by Aritro Shome
@echo off
echo Creating %1.cpp with template.cpp 
@echo off
echo off
touch %1.cpp
cat template.cpp > %1.cpp
micro %1.cpp
