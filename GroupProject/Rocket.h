#ifndef ROCKET_H
#define ROCKET_H

#include <string>
#include <iostream>
#include "Destination.h"
#include "CompositeStage.h"

using namespace std;

class Rocket {
private:
    Destination* destination;
	CompositeStage* stage;
	bool isLaunch;
	double cost;
public:
	Rocket(CompositeStage*,double);

	virtual void Launch();
	virtual void Interrupt();
	virtual void NextStage();

	virtual void setDestination(Destination* d);
	Destination* getDestination();

	CompositeStage* getStage();
	void setStage(CompositeStage*);

	bool getLaunch();


	//prototype:
	virtual Rocket* clone()=0;
};

#endif
