cmake_minimum_required(VERSION 2.8)

project(algorithm CXX)

set(EXECUTABLE_OUTER_PATH ${CMAKE_CURRENT_SOURCE_DIR}/output/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output/bin)

include_directories(src)

file(GLOB BUBBLE_SORT_SOURCE_FILES src/sort/bubble_sort.cc)
add_executable(bubble_sort ${BUBBLE_SORT_SOURCE_FILES})

file(GLOB REVERSE_INTEGER_SOURCE_FILES src/array/reverse_integer.cc)
add_executable(reverse_integer ${REVERSE_INTEGER_SOURCE_FILES})

file(GLOB SAME_TREE_SOURCE_FILES src/tree/same_tree.cc)
add_executable(same_tree ${SAME_TREE_SOURCE_FILES})

file(GLOB PLUS_ONE_SOURCE_FILES src/array/plus_one.cc)
add_executable(plus_one ${PLUS_ONE_SOURCE_FILES})

file(GLOB MERGE_INTERVALS_SOURCE_FILES src/array/merge_intervals.cc)
add_executable(merge_intervals ${MERGE_INTERVALS_SOURCE_FILES})

