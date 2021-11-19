
#ifndef StarlinkVector_H
#define StarlinkVector_H
// Concrete Aggregate
#include <vector>
#include "StarlinkCollection.h"

// class StarlinkVectorIterator;
class StarlinkVector : public StarlinkCollection
{
    // friend class StarlinkVectorIterator;

private:
    std::vector<StarlinkCommunication *> nodeCollection;
    /* data */
public:
    StarlinkVector(){};
    // StarlinkVector(StarlinkCollection& col){

    // };
    void add(StarlinkCommunication *newNode)
    {
        nodeCollection.push_back(newNode);
        // StarlinkCollection::add(newNode);
    }
    void remove()
    {
        nodeCollection.pop_back();
        // StarlinkCollection::remove();
    }
    StarlinkCollection::iterator begin()
    {
        return iterator(&this->nodeCollection.front());
    };
    StarlinkCollection::iterator end()
    {
        return iterator(&this->nodeCollection.back());
    };
    ~StarlinkVector(){};
};

#endif