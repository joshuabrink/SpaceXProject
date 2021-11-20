#ifndef CONCRETESPACECRAFTFACTORY_H
#define CONCRETESPACECRAFTFACTORY_H

#include "SpaceCraftFactory.h"
#include <iostream>
using namespace std;

class DragonFactory : public SpaceCraftFactory
{
public:
	
	DragonFactory();
	~DragonFactory();

	SpaceCraft* createSpaceCraft(double, int);
private:

};


class CrewDragonFactory : public SpaceCraftFactory
{
public:
	CrewDragonFactory();
	~CrewDragonFactory();

	SpaceCraft* createSpaceCraft(double, int);
private:

};

#endif 

