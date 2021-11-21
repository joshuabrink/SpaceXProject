#ifndef TRANSPORTENTITYCOLLECTION_H
#define TRANSPORTENTITYCOLLECTION_H
#include "TransportEntity.h"
class TransportEntityCollection
{
private:
    /* data */
public:
    TransportEntityCollection(/* args */) {}
    virtual void add(TransportEntity *){

    };

    virtual void remove() = 0;
    virtual void display() = 0;
    ~TransportEntityCollection() {}
};
#endif