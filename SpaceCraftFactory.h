#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H

#include "SpaceCraft.h"

using namespace std;

class SpaceCraftFactory
{
public:
	SpaceCraftFactory();
	~SpaceCraftFactory();

	virtual SpaceCraft* createSpaceCraft(double, int) = 0;
private:

};

#endif