#include "Falcon9.h"
Falcon9::Falcon9(CompositeStage* c,double cost):Rocket(c,cost)
{
}

void Falcon9::addSatellites(SatelliteCollection* s)
{
	satellites = s;
}

Rocket* Falcon9::clone()
{
	CompositeStage* temp = new CompositeStage(getStage());
	Rocket* out = new Falcon9(temp,getCost());
	out->setDestination(getDestination()->clone());

	SatelliteIterator* iterate = satellites->createIterator();
	SatelliteCollection* outSattelites = new SatelliteVector();
	//vector<OrbitingSatellite*>::iterator it = satellites->getVector().begin();

	while (iterate->current() != iterate->lastSat())
	{
		outSattelites->addList(static_cast<StarlinkOrbitingSatellite*>((iterate->current())->clone()));
		iterate->nextSat();
	}

	out->addSatellites(outSattelites);


	return out;
	
}

void Falcon9::Launch()
{
	if (getDestination == nullptr) {
		cout << "Please set a destination before launch!" << endl;
		return;
	}

	if (getLaunch()) {
		cout << "Falcon 9 already launched" << endl;
	}
	else {
		cout << "Launching Falcon 9" << endl;
		setLaunch(true);
	}
}

void Falcon9::Interrupt()
{
	if (getLaunch()) {
		cout << "Aborting Falcon 9 launch! " << endl;
		setLaunch(false);
	}
	else {
		cout << "Falcon 9 Launch hasn't started yet" << endl;
	}
}

