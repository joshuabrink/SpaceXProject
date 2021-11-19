#ifndef COMNODEQUEUE_H
#define COMNODEQUEUE_H
// Concrete Aggregate
#include <deque>
#include "ComNodeCollection.h"

// class ComNodeQueueIterator;
class ComNodeQueue : public ComNodeCollection
{
    // friend class ComNodeQueueIterator;

private:
    std::deque<CommuncationNode *> nodeCollection;
    /* data */
public:
    ComNodeQueue(){};
    // ComNodeQueue(ComNodeCollection& col){

    // };
    void add(CommuncationNode *newNode)
    {
        nodeCollection.push_back(newNode);
        // ComNodeCollection::add(newNode);
    }
    void remove()
    {
        nodeCollection.pop_front();
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
    ~ComNodeQueue(){};
};

#endif