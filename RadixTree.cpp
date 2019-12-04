#include "RadixTree.h"

RadixTree::RadixTree()
{
    m_size = 0;
    m_root = new node();
}

void RadixTree::insert(const std::string &value)
{
    ++m_size;
    m_root->setNext(value);
}

void RadixTree::remove(const std::string &value)
{
    // TODO: Need realization
}

RadixTree::iterator RadixTree::begin() const
{
    // TODO: Need realization
    return iterator();
}

RadixTree::iterator RadixTree::end() const
{
    // TODO: Need realization
    return iterator();
}

int RadixTree::size() const
{
    // TODO: Need realization
    return 0;
}

bool RadixTree::iterator::operator!=(const RadixTree::iterator &other) const
{
    // TODO: Need realization
    return false;
}

const RadixTree::node& RadixTree::iterator::operator*() const
{
    // TODO: Need realization
    return m_node;
}

RadixTree::iterator& RadixTree::iterator::operator++()
{
    // TODO: Need realization
    return *this;
}

std::ostream& operator<<(std::ostream &out, const RadixTree::node &node)
{
    // TODO: Need realization`
    out << "hello world!";
    return out;
}
