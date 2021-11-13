#ifndef ROCKET_H
#define ROCKET_H

#include <string>
#include <iostream>
#include "Destination.h"
using namespace std;

class Rocket {
private:
    Destination* destination;
public:
	virtual void Launch()=0;
	virtual void Interrupt()=0;
	virtual void NextStage() =0;
	void setDestination(Destination* d);

	string getDestination();
};

#endif
