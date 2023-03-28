cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(sorting_visualizer VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(sv main.cpp ${SRC_FILES})
# add_executable(sv main.cpp src/algorithms.cpp src/initSDL.cpp)

target_include_directories(sv PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(sv SDL2main SDL2)