#include "Build.h"

Build::Build(RocketFactory* factory,double cost)
{
	myRocketFactory = factory;
	this->cost = cost;
}

Rocket* Build::executeBuild()
{
	return myRocketFactory->createRocket(cost);
}
