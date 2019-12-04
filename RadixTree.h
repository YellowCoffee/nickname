#ifndef RADIXTREE_H
#define RADIXTREE_H

#include <string>
#include <iostream>
#include <iterator>

class RadixTree
{
public:
    struct node {
        char *label;
        int is_end;
        node* childs;

        friend std::ostream& operator<<(std::ostream& out, const node& node);
    };

    struct iterator {
        node m_node;

        bool operator!=(iterator const& other) const;
        const node& operator*()const;
        iterator& operator++();
    };

    RadixTree();

    void insert(const std::string& value);
    void remove(const std::string& value);

    iterator begin() const;
    iterator end() const;

    int size() const;

private:
    node* m_root;
    int m_size;
};

#endif // RADIXTREE_H
