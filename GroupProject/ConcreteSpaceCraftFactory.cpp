#include "ConcreteSpaceCraftFactory.h"

DragonFactory::DragonFactory(){

}

DragonFactory::~DragonFactory(){

}

SpaceCraft* DragonFactory::createSpaceCraft(double Cost, int capacity) {
	return new Dragon(Cost, capacity);
}


CrewDragonFactory::CrewDragonFactory()
{
}

CrewDragonFactory::~CrewDragonFactory()
{
}

SpaceCraft* CrewDragonFactory::createSpaceCraft(double Cost,int capacity ) {
	return new DragonCrew(Cost, capacity);
}