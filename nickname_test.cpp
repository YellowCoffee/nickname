#define BOOST_TEST_MODULE nickname_test_module

#include <boost/test/unit_test.hpp>

//#include "RadixTree.h"
//#include <iostream>
//#include <algorithm>


BOOST_AUTO_TEST_SUITE(nickname_test_suite)

BOOST_AUTO_TEST_CASE( test_test ) {
    BOOST_CHECK( 2 > 0);
}
/*
BOOST_AUTO_TEST_CASE( worflow_test )
{
    RadixTree radixTree;
    radixTree.insert("aleksey");
    radixTree.insert("sasha");
    radixTree.insert("aleks");
    radixTree.insert("alek");
    radixTree.insert("alesha");
    radixTree.insert("maksim");

    BOOST_CHECK( 2 > 3);

    for( auto it = radixTree.begin(); it != radixTree.end(); ++it) {
        std::cout << *it;
    }

//    std::for_each( radixTree.begin(), radixTree.end(), []( auto a ){
//        std::cout << a;
//    } );

}
*/
BOOST_AUTO_TEST_SUITE_END()
