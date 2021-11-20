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
	CompositeStage* temp = new CompositeStage(getStage());
	Rocket* out = new Falcon9(temp,getCost());
	out->setDestination(getDestination()->clone());

	list<Satellite*>::iterator it = satellites.begin();

	for (int i = 0; i < satellites.size(); i++) {
		out->addSatellites(*it);
		it++;
	}

	return out;
	
}

