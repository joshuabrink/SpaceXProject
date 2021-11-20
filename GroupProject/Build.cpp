#include "Build.h"

Build::Build(RocketFactory* factory)
{
	myRocketFactory = factory;
}

Rocket* Build::executeBuild()
{
	return myRocketFactory->createRocket();
}
