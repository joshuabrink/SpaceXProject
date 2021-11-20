#ifndef FALCON9_H
#define FALCON9_H

#include "Rocket.h"
#include "Rocket.h"
#include <list>

using namespace std;

class Falcon9 : public Rocket {
private:
	list<Satellite*> satellites;
public:
	Falcon9(CompositeStage*,double);
	void addSatellites(Satellite*);
	//prototype:
	Rocket* clone();
};

#endif
