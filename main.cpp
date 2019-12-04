#include <iostream>

#include "RadixTree.h"

int main()
{
    RadixTree radixTree;
    radixTree.insert("aleksey");
    radixTree.insert("sasha");
    radixTree.insert("aleks");
    radixTree.insert("alek");
    radixTree.insert("alesha");
    radixTree.insert("maksim");

    std::cout << "radixTree.size(): " << radixTree.size() <<std::endl;

    for( auto it = radixTree.begin(); it != radixTree.end(); ++it) {
        std::cout << *it;
    }

    std::cout << "hello world!" << std::endl;
}
