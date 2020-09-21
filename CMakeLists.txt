cmake_minimum_required(VERSION 3.8)
project(blinky)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(blinky src/blinky.cpp)
target_link_libraries(blinky wiringPi)



