#ifndef NEXTSTAGE_H
#define NEXTSTAGE_H

#include "Command.h"
#include "Rocket.h"

class NextStage :public Command {
private:
	Rocket* myRocket;

public:
	NextStage(Rocket* R) { myRocket = R; };
	void execute() { myRocket->NextStage(); };
};

#endif
