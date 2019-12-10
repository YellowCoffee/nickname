#include "RadixTree.h"

#include <algorithm>

RadixTree::RadixTree()
{
    m_size = 0;
    m_root = nullptr;
}

void RadixTree::insert(const std::string &value)
{
    ++m_size;
    if ( !m_root ) {
        m_root = new node(value);
    } else {
        m_root->createChild(value);
    }
}

RadixTree::node::node(const std::string &label)
    : m_label(label),
      m_is_end(true),
      m_childs()
{

}

bool RadixTree::node::moveChild(const std::string &firstSuffix)
{
    if (!firstSuffix.empty()) {
        auto firstNode = new node(firstSuffix);
        auto it = std::find_if( m_childs.begin(), m_childs.end(), [this, firstSuffix](const auto& child) {
            return child->m_label[0] == firstSuffix[0];
        } );
        if (it != m_childs.end()) {
            std::for_each( it, m_childs.end(), [this, firstNode](const auto& child){
                m_childs.push_back( child );
            } );
        }
        m_childs.push_back( firstNode );
        return true;
    }
    return false;
}

const std::vector<RadixTree::node*>::const_iterator RadixTree::node::findChild(const std::string &label)
{
    if ( label.empty() )
        return m_childs.cend();

    return std::find_if( m_childs.cbegin(), m_childs.cend(), [this, label](const auto& child) {
        return child->m_label[0] == label[0];
    } );
}

void RadixTree::node::processSuffix(const std::__cxx11::string &suffix)
{
    if (suffix.empty())
        return;

    auto it = findChild( suffix );
    if ( it == m_childs.end() ) {
        auto child = new node(suffix);
        for(const auto& c : m_childs) {
            child->m_childs.push_back(c);
        }
        m_childs.clear();
        m_childs.push_back(child);

        std::sort( m_childs.begin(), m_childs.end(), [](const auto& first, const auto& second ) {
            return first->m_label.compare(second->m_label) < 0;
        } );
    } else {
        (*it)->createChild( suffix );
    }
}

void RadixTree::node::createChild(const std::string &otherLabel)
{
    std::string sharedPart;
    std::string firstSuffix;
    std::string secondSuffix;

    auto pair = std::mismatch( m_label.begin(), m_label.end(), otherLabel.begin(), otherLabel.end() );
    sharedPart = std::string( m_label.begin(), pair.first );
    firstSuffix = std::string( pair.first, m_label.end() );
    secondSuffix = std::string( pair.second, otherLabel.end() );

    m_label = sharedPart;
    m_is_end = false;

    processSuffix(firstSuffix);
    processSuffix(secondSuffix);
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

