#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include "Rocket.h"

using namespace std;

class FalconHeavy: public Rocket {
public:
	FalconHeavy(CompositeStage*,double);
	void Launch();
	void Interrupt();
	//prototype:
	Rocket* clone();
};

#endif
