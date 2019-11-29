cmake_minimum_required(VERSION 3.5)

project(nickname LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nickname main.cpp RadixTree.cpp)

add_executable(nickname_test nickname_test.cpp RadixTree.cpp)
