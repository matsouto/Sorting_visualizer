cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(sorting_visualizer VERSION 1.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(sv main.cpp src/global.cpp ${SRC_FILES})
# add_executable(sv main.cpp src/algorithms.cpp src/initSDL.cpp)

target_include_directories(sv PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(sv SDL2main SDL2)