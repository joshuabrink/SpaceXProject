#ifndef SIMULATIONBACKUP_H
#define SIMULATIONBACKUP_H

#include "Destination.h"
#include "Rocket.h"

class SimulationBackup {
private:
	friend class Simulation;
	Rocket* myRocket;
	float price;
	SimulationBackup(Rocket*,float);

public:
	virtual ~SimulationBackup();

	
};


#endif
