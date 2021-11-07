#ifndef BUILD_H
#define BUILD_H

#include "Command.h"

class Build:public Command{
private:
	RocketFactory* myRocketFactory;

public:
	Build(RocketFactory*);
	void execute();
}

#endif
