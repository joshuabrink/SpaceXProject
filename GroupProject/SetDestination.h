#ifndef SETDESTINATION_H
#define SETDESTINATION_H

#include "Command.h"
#include "Rocket.h"

class SetDestination :public Command {
private:
	Rocket* myRocket;

public:
	SetDestination(Rocket* r);
	void execute();
}

#endif
