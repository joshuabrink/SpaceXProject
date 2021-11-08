#ifndef SETDESTINATION_H
#define SETDESTINATION_H

#include "Command.h"
#include "Rocket.h"

class SetDestination :public Command {
private:
	Rocket* myRocket;
	string destination;

public:
	SetDestination(Rocket* R, string d) { myRocket = R; destination = d; };
	void execute() { myRocket->setDestination(destination); };
};

#endif
