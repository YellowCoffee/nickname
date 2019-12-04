cmake_minimum_required(VERSION 3.15)

project(nickname LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nickname main.cpp RadixTree.cpp)

include_directories(${BOOST_INCLUDEDIR})


add_executable(nickname_test nickname_test.cpp RadixTree.cpp)

find_package( Boost COMPONENTS unit_test_framework REQUIRED )

set_target_properties(nickname_test PROPERTIES
    COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
    INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
)

target_link_libraries( nickname_test ${Boost_LIBRARIES} )

