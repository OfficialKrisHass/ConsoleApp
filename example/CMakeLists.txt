cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(ConsoleAppExample)

add_subdirectory(../ bin)

add_executable(ConsoleAppExample main.cpp)
set_target_properties(ConsoleAppExample PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/../bin")

target_link_libraries(ConsoleAppExample ConsoleApp)

target_include_directories(ConsoleAppExample PUBLIC "${PROJECT_SOURCE_DIR}/../include")