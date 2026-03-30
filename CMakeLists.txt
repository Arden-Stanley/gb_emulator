cmake_minimum_required(VERSION 3.10)

project(gb_emulator)

add_executable(gbe src/gb.cpp src/memory.cpp src/cpu.cpp)