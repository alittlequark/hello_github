cmake_minimum_required(VERSION 3.27.0)

project(SWAP_DEMO)  

set(CMAKE_CXX_FKAGS "${CMAKE_CXX_FKAGS} -g")  # 不覆盖的添加参数

set(CMAKE_BUILD_TYPE Debug)   #debug调试

include_directories(include)   # 相当于 -Iinclude

add_executable(swap_cmake main.cpp src/swap.cpp)