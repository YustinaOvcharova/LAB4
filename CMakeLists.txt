cmake_minimum_required(VERSION 2.8)

project(Calc)

set(SOURCE_EXE output.cpp)

set(SOURCE_LIB calculator.cpp)

add_library(calculator STATIC ${SOURCE_LIB})

add_executable(calc.o ${SOURCE_EXE})

target_link_libraries(calc.o calculator)
