#ifndef COMNODEQUEUEITERATOR_H
#define COMNODEQUEUEITERATOR_H
// Concrete Iterator
#include "ComNodeCollectionIterator.h"
class ComNodeQueueIterator : public ComNodeCollectionIterator

{
private:
    std::deque<CommuncationNode>::iterator iter;

public:
    ComNodeQueueIterator(){};
    ComNodeQueueIterator(ComNodeQueue *col, int index = 0)
    {
        iter = col->nodeCollection.begin() + index;
    }
    CommuncationNode &operator*() const
    {
        return *iter;
    };
    ComNodeCollectionIterator &operator++()
    {

        ++iter;

        return (*this);
    };
    ComNodeCollectionIterator &operator--()
    {

        --iter;

        return (*this);
    };
    bool operator==(const ComNodeCollectionIterator &rhs) const
    {
        CommuncationNode c = *iter;
        CommuncationNode b = *(*(ComNodeQueueIterator *)&rhs);
        return c == b;
    };
    ~ComNodeQueueIterator(){};
};

#endif