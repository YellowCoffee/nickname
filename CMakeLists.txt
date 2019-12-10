cmake_minimum_required(VERSION 3.12)

project(nickname)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra")

add_executable(nickname main.cpp RadixTree.cpp)

#include_directories(${BOOST_INCLUDEDIR})

#add_executable(nickname_test nickname_test.cpp ) #RadixTree.cpp)

#set_target_properties(nickname_test PROPERTIES
#    COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
#    INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
#)
#target_link_libraries( nickname_test ${Boost_LIBRARIES} )

#find_package( Boost COMPONENTS unit_test_framework REQUIRED )

