#ifndef SETDESTINATION_H
#define SETDESTINATION_H

#include "Command.h"
#include "Rocket.h"
#include "Destination.h"

class SetDestination :public Command {
private:
	Rocket* myRocket;
	Destination* destination;

public:
    SetDestination(Rocket* R, Destination* d) { myRocket = R; destination = d; };
	void execute() { myRocket->setDestination(destination); };
};

#endif
