cmake_minimum_required(VERSION 3.16)
project(CSC340_midterm)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Werror)

set(Sources Student.cpp StudentContainer.cpp)
set(Headers Student.h StudentContainer.h)

add_executable(CSC340_midterm main.cpp ${Sources} ${Headers})
