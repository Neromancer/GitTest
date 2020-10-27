cmake_minimum_required(VERSION 3.0)
project(Test)

add_subdirectory(Calc)

add_executable(Test main.cpp)

target_link_libraries(Test Calc)