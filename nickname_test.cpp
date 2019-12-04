#define BOOST_TEST_MODULE nickname_test_module

#include <boost/test/unit_test.hpp>

#include "RadixTree.h"
#include "iostream"

BOOST_AUTO_TEST_SUITE(nickname_test_suite)

BOOST_AUTO_TEST_CASE( worflow_test )
{
    RadixTree radixTree;
    radixTree.insert("aleksey");
    radixTree.insert("sasha");
    radixTree.insert("aleks");
    radixTree.insert("alek");
    radixTree.insert("alesha");
    radixTree.insert("maksim");

    std::for_each( radixTree.begin(), radixTree.end(), []( const auto& item ){
        std::cout << item->value() << item->minimalPrefix() << std::endl;
    } );
/*
    std::for_each( radixTree.begin(), radixTree.end(), [](const RadixTree::& item){
        std::cout << item->node() << std::endl;
    });
*/
}

BOOST_AUTO_TEST_SUITE_END()
