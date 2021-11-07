#ifndef LAUNCH_H
#define LAUNCH_H

#include "Command.h"
#include "Rocket.h"

class Launch :public Command {
private:
	Rocket* myRocket;

public:
	Launch(Rocket*);
	void execute();
}

#endif