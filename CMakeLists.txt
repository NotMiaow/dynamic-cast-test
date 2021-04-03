cmake_minimum_required(VERSION 3.7)
project(dynamic_cast_test)

set(CMAKE_CXX_STANDARD 20)

include_directories(headers)
add_subdirectory(source)

#Set threading flag
SET(CMAKE_CXX_FLAGS -pthread)
#add executable
add_executable(${PROJECT_NAME} main.cpp)
#link source libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
    dynamic_cast_test_lib
)
#set bin output directory
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
