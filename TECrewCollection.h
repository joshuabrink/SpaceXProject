#ifndef TECREWCOLLECTION_H
#define TECREWCOLLECTION_H
#include <vector>
#include "TransportEntityCrew.h"
#include "TransportEntityCollection.h"
class TECrewCollection : public TransportEntityCollection
{
private:
    std::vector<TransportEntityCrew*> entities;

public:
    TECrewCollection(/* args */) {}
    void add(TransportEntity* entity)
    {

        entities.push_back((TransportEntityCrew*) entity);
    };
    void remove()
    {

        entities.pop_back();
    };
    ~TECrewCollection() {}
};
#endif