#include "Falcon9.h"

Falcon9::Falcon9(CompositeStage* c,double cost):Rocket(c,cost)
{
}

void Falcon9::addSatellites(Satellite* s)
{
	satellites.push_back(s);
}

Rocket* Falcon9::clone()
{
	return nullptr;
}

