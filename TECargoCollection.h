#ifndef TECARGOCOLLECTION_H
#define TECARGOCOLLECTION_H
#include <vector>
#include "TransportEntityCargo.h"
#include "TransportEntityCollection.h"
class TECargoCollection : public TransportEntityCollection
{
private:
    std::vector<TransportEntityCargo *> entities;

public:
    TECargoCollection(/* args */) {}
    void add(TransportEntity* entity)
    {
        entities.push_back((TransportEntityCargo*)entity);
    };
    void remove()
    {

        entities.pop_back();
    };
    ~TECargoCollection() {}
};
#endif