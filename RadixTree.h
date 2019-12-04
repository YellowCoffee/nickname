#ifndef RADIXTREE_H
#define RADIXTREE_H

#include <string>
#include <iterator>

class RadixTree
{

public:
    struct node {
        int value();
        int minimalPrefix();
    };

    struct iterator
    {
//        bool operator!=(const iterator& other) const;
//        void operator++();
//        node* operator->();
//        node operator*();
    };

    RadixTree();

    void insert(const std::string& value);
    iterator begin() const;
    iterator end() const;
};

#endif // RADIXTREE_H
