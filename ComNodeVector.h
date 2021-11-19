
#ifndef COMNODEVECTOR_H
#define COMNODEVECTOR_H
// Concrete Aggregate
#include <vector>
#include "ComNodeCollection.h"

// class ComNodevectorIterator;
class ComNodeVector : public ComNodeCollection
{
    // friend class ComNodevectorIterator;

private:
    std::vector<CommuncationNode *> nodeCollection;
    /* data */
public:
    ComNodeVector(){};
    // ComNodevector(ComNodeCollection& col){

    // };
    void add(CommuncationNode *newNode)
    {
        nodeCollection.push_back(newNode);
        // ComNodeCollection::add(newNode);
    }
    void remove()
    {
        nodeCollection.pop_back();
        // ComNodeCollection::remove();
    }
    ComNodeCollection::iterator begin()
    {
        return iterator(&this->nodeCollection.front());
    };
    ComNodeCollection::iterator end()
    {
        return iterator(&this->nodeCollection.back());
    };
    ~ComNodeVector(){};
};

#endif