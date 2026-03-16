cmake_minimum_required(VERSION 3.20)
project(dumper LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(dumper
    src/helper/singleton.hpp

    src/main.cpp 
    src/vendor.hpp

    src/core/dumper.cpp
    src/core/dumper.hpp

    src/helper/memory.cpp
    src/helper/memory.hpp
)
target_link_libraries(dumper PRIVATE kernel32 user32)