#ifndef StarlinkQueue_H
#define StarlinkQueue_H
// Concrete Aggregate
#include <deque>
#include "StarlinkCollection.h"

// class StarlinkQueueIterator;
class StarlinkQueue : public StarlinkCollection
{
    // friend class StarlinkQueueIterator;

private:
    std::deque<StarlinkCommunication *> nodeCollection;
    /* data */
public:
    StarlinkQueue(){};
    // StarlinkQueue(StarlinkCollection& col){

    // };
    void add(StarlinkCommunication *newNode)
    {
        nodeCollection.push_back(newNode);
        // StarlinkCollection::add(newNode);
    }
    void remove()
    {
        nodeCollection.pop_front();
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
    ~StarlinkQueue(){};
};

#endif