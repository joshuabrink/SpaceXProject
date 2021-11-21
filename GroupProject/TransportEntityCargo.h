#ifndef TRANSPORTENTITYCARGO_H
#define TRANSPORTENTITYCARGO_H
#include "TransportEntity.h"
class TransportEntityCargo : public TransportEntity
{
private:
    /* data */
public:
    TransportEntityCargo(/* args */) {}
    ~TransportEntityCargo() {}
    void display(){cout << "Cargo" << endl;};
};
#endif