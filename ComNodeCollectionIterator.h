#ifndef COMNODECOLLECTIONITERATOR_H
#define COMNODECOLLECTIONITERATOR_H
#include "CommuncationNode.h"
class ComNodeQueue;
class ComNodeCollectionIterator
{

public:
    ComNodeCollectionIterator(){};
    ComNodeCollectionIterator(ComNodeQueue*, int){};
    virtual CommuncationNode &operator*() const=0;
    virtual ComNodeCollectionIterator &operator++()=0;
    virtual ComNodeCollectionIterator &operator--()=0;
    virtual bool operator==(const ComNodeCollectionIterator &) const=0;
    ~ComNodeCollectionIterator(){};
};

#endif