cmake_minimum_required(VERSION 3.16)
project(Trim LANGUAGES C CXX)

# C = C lauguage / CXX = C++
#setting standard liberary, C
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_subdirectory(Sources)
add_subdirectory(tests)


