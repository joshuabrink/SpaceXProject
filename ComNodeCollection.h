#ifndef COMNODECOLLECTION_H
#define COMNODECOLLECTION_H
// Aggregate
#include <memory>
#include "CommuncationNode.h"
// #include "ComNodeCollectionIterator.h"
class ComNodeCollectionIterator; 
class ComNodeCollection
{

public:
    ComNodeCollection(){};
    virtual std::unique_ptr<ComNodeCollectionIterator>begin(){return 0;};
    virtual std::unique_ptr<ComNodeCollectionIterator>end(){return 0;};

    // Adds to the end of collection
    virtual void add(CommuncationNode& node)=0;

    // Finds element in collection
    // virtual CommuncationNode* search(const int id) {
    //     if(head == 0)
    //         return 0;
    //     CommuncationNode* temp = head;
    //     while (temp->next != 0)
    //     {
    //         if(temp->id == id) {
    //             return temp;
    //         }
    //         temp = temp->next;
    //     }
    //     return 0;
    // }
    // Removes first element
    virtual void remove()=0;
    
    virtual ~ComNodeCollection() {};
};


#endif