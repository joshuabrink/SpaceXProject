#ifndef SPACECRAFTCREWDRAGON_H
#define SPACECRAFTCREWDRAGON_H
#include <vector>
#include <iostream>
#include "SpaceCraft.h"
#include "TransportEntityCollection.h"
class SpaceCraftCrewDragon : public SpaceCraft
{
private:
    TransportEntityCollection* storage;
public:
    SpaceCraftCrewDragon(/* args */) {}
    void addEntities(TransportEntityCollection* collection) {      
        std::cout << "Crew Dragon populated" << std::endl;
        storage = collection;
    };
    ~SpaceCraftCrewDragon() {}
};

#endif