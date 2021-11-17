#ifndef COMNODEQUEUE_H
#define COMNODEQUEUE_H
// Concrete Aggregate
#include <deque>
#include <memory>
#include "CommuncationNode.h"

 class ComNodeQueueIterator;
class ComNodeQueue 
{
    friend class ComNodeQueueIterator;

private:
    std::deque<CommuncationNode> nodeCollection;
    /* data */
public:
    ComNodeQueue(){};
    // ComNodeQueue(ComNodeCollection& col){

    // };
    void add(CommuncationNode &newNode)
    {
        nodeCollection.push_back(newNode);
        // ComNodeCollection::add(newNode);
    }
    void remove()
    {
        nodeCollection.pop_front();
        // ComNodeCollection::remove();
    }
    // CommuncationNode* search() {

    // virtual CommuncationNode* search(const int id) {
    //     if(nodeQueue.empty())
    //         return 0;
    //    queue<CommuncationNode> tempQueue = nodeQueue;
    //    CommuncationNode tempNode = tempQueue.front();
    //     while (tempNode != 0)
    //     {
    //         if(tempNode->id == id) {
    //             return tempNode;
    //         }
    //         tempQueue.pop();
    //     }

    //     return 0;
    // }
    ComNodeQueueIterator begin();
    ComNodeQueueIterator end();
    ~ComNodeQueue(){};
};

// std::unique_ptr<ComNodeCollectionIterator> ComNodeQueue ::begin()
// {
//     return std::make_unique<ComNodeQueueIterator>(this);
// };
// std::unique_ptr<ComNodeCollectionIterator> ComNodeQueue ::end()
// {
//     return std::make_unique<ComNodeQueueIterator>(this, nodeCollection.size() - 1);
// };

#include "ComNodeQueueIterator.h"
ComNodeQueueIterator ComNodeQueue ::begin()
{
    return ComNodeQueueIterator(this);
};
ComNodeQueueIterator ComNodeQueue ::end()
{
    return ComNodeQueueIterator(this, nodeCollection.size() - 1);
};

#endif