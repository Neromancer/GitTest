cmake_minimum_required(VERSION 3.15)
project(Test)

add_subdirectory(contrib/googletest)
add_subdirectory(Calc)

add_executable(Test main.cpp)

target_link_libraries(Test Calc)