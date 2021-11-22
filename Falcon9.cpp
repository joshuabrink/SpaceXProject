#include "Falcon9.h"

Falcon9::Falcon9(CompositeStage *c, double cost) : Rocket(c, cost)
{
	/*satellites=nullptr;
	iterate=nullptr;*/
}

Falcon9::Falcon9(double cost) : Rocket(cost)
{
}

// void Falcon9::addSatellites(SatelliteCollection* s)
//{
//	satellites = s;
//	iterate = satellites->createIterator();
//
// }

Rocket *Falcon9::clone()
{
	CompositeStage *temp = new CompositeStage(getStage());
	Rocket *out = new Falcon9(temp, getCost());
	if (getDestination() != nullptr)
	{
		out->setDestination(getDestination()->clone());
	}

	//	if(satellites!=nullptr&&iterate!=nullptr)
	//	{
	//	SatelliteCollection* outSattelites = new SatelliteVector();
	//	//vector<OrbitingSatellite*>::iterator it = satellites->getVector().begin();
	//	iterate->firstSat();
	//
	//	while (iterate->current() != iterate->lastSat())
	//	{
	//		outSattelites->addList(static_cast<StarlinkOrbitingSatellite*>((iterate->current())->clone()));
	//		iterate->nextSat();
	//	}
	//	outSattelites->addList(static_cast<StarlinkOrbitingSatellite*>((iterate->current())->clone()));
	////ASK JOSH ABOUT LINE 32
	//	out->addSatellites(outSattelites);
	//
	//
	//	}

	return out;
}

void Falcon9::Launch()
{
	if (getDestination() == nullptr)
	{
		cout << "Please set a destination before launch!" << endl;
		return;
	}

	if (getLaunch())
	{
		cout << "Falcon 9 already launched" << endl;
	}
	else
	{
		cout << "Launching Falcon 9" << endl;
		/*if(satellites!=nullptr&&iterate!=nullptr)
		{
		SatelliteIterator* iterate = satellites->createIterator();
		iterate->firstSat();

		while (iterate->current() != iterate->lastSat())
		{
			iterate->current()->launchStarlinkOrbitingSatellite(true);
			iterate->nextSat();
		}
		iterate->current()->launchStarlinkOrbitingSatellite(true);
		}*/

		setLaunch(true);
	}
}

void Falcon9::Interrupt()
{
	if (getLaunch())
	{
		cout << "Aborting Falcon 9 launch! " << endl;
		/*if(satellites!=nullptr&&iterate!=nullptr)
		{
		SatelliteIterator* iterate = satellites->createIterator();
		iterate->firstSat();

		while (iterate->current() != iterate->lastSat())
		{
			iterate->current()->launchStarlinkOrbitingSatellite(false);
			iterate->nextSat();
		}
		iterate->current()->launchStarlinkOrbitingSatellite(false);
		}


			setLaunch(false);*/
	}
	else
	{
		cout << "Falcon 9 Launch hasn't started yet" << endl;
	}
}
