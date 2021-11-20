#ifndef FALCON9_H
#define FALCON9_H

#include "Rocket.h"
#include "Rocket.h"
#include "SatelliteVector.h"

using namespace std;

class Falcon9 : public Rocket {
private:
	SatelliteCollection* satellites;

public:
	Falcon9(CompositeStage*,double);
	void addSatellites(SatelliteCollection*);
	void Launch();
	void Interrupt();
	//prototype:
	Rocket* clone();
};

#endif
