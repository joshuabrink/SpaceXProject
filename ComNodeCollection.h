#ifndef COMNODECOLLECTION_H
#define COMNODECOLLECTION_H
// Aggregate
#include <memory>
// #include "CommuncationNode.h"
class CommuncationNode;
#include "CollectionIterator.h"
class ComNodeCollection
{
public:
    typedef CollectionIterator<CommuncationNode*> iterator;
    ComNodeCollection(){};
    virtual ComNodeCollection::iterator begin() = 0;
    // {
    //     const ComNodeCollectionIterator& iter = *std::make_unique<ComNodeCollectionIterator>();
    //     return iter;
    // };
    virtual ComNodeCollection::iterator end() = 0;

    // Adds to the end of collection
    virtual void add(CommuncationNode *node) = 0;

    // Removes first element
    virtual void remove() = 0;

    virtual ~ComNodeCollection(){};
};

#endif