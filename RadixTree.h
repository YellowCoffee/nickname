#ifndef RADIXTREE_H
#define RADIXTREE_H

#include <string>

class RadixTree
{

public:
    class node {

    };

    class iterator {

    public:
        bool operator !=(const iterator& other) const;
        void operator++();
        node operator*();

    };

    RadixTree();

    void insert(const std::string& value);
    iterator begin() const;
    iterator end() const;
};

#endif // RADIXTREE_H
