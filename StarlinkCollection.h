#ifndef STARLINKCOLLECTION_H
#define STARLINKCOLLECTION_H
// Aggregate
class StarlinkCommunication;

#include "CollectionIterator.h"
class StarlinkCollection
{
public:
    typedef CollectionIterator<StarlinkCommunication*> iterator;
    StarlinkCollection(){};
    virtual StarlinkCollection::iterator begin() = 0;
    // {
    //     const StarlinkCollectionIterator& iter = *std::make_unique<StarlinkCollectionIterator>();
    //     return iter;
    // };
    virtual StarlinkCollection::iterator end() = 0;

    // Adds to the end of collection
    virtual void add(StarlinkCommunication *node) = 0;

    // Removes first element
    virtual void remove() = 0;

    virtual ~StarlinkCollection(){};
};

#endif