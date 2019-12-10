#ifndef RADIXTREE_H
#define RADIXTREE_H

#include <string>
#include <iostream>
#include <iterator>
#include <vector>

class RadixTree
{
public:
    struct node {
        std::string m_label;
        bool m_is_end;
        std::vector<node*> m_childs;

        // TODO: Need remove
        node() = default;

        node( const std::string& label );
        void createChild(const std::string& label);

        friend std::ostream& operator<<(std::ostream& out, const node& node);

    private:
        bool moveChild(const std::string &firstSuffix);
        const std::vector<node*>::const_iterator findChild(const std::string& label);
        void processSuffix(const std::string& suffix);
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
