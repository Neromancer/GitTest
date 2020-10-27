project(Calc)

add_library(Calc Summator.h Summator.cpp)
target_include_directories(Calc PUBLIC .)

add_subdirectory(test)
