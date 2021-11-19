#ifndef FALCON9_H
#define FALCON9_H

#include "Rocket.h"

class Falcon9 : public Rocket {
private:
	
public:
	virtual void Launch() = 0;
	virtual void Interrupt() = 0;
	virtual void NextStage() = 0;

	//prototype:
	virtual Rocket* clone() = 0;
};

#endif
