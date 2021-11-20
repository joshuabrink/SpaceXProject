#ifndef SPACECRAFTDRAGON_H
#define SPACECRAFTDRAGON_H
#include <vector>
#include <iostream>
#include "GroupProject/SpaceCraft.h"
#include "TECargoCollection.h"
#include "TransportEntityCollection.h"
class SpaceCraftDragon : public SpaceCraft
{
private:
  TECargoCollection* storage;
public:
    SpaceCraftDragon(/* args */) {}
    void addEntities(TransportEntityCollection* collection)override {      
        std::cout << "Dragon populated" << std::endl;
        storage = (TECargoCollection*)collection;
    };
    ~SpaceCraftDragon() {}
};

#endif