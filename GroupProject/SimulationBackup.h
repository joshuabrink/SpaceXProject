#ifndef SIMULATIONBACKUP_H
#define SIMULATIONBACKUP_H

#include "Destination.h"
#include "Rocket.h"

class SimulationBackup {
private:
	friend class Simulation;
	Rocket* myRocket;
	double price;
	SimulationBackup(Rocket*,double);

public:
	virtual ~SimulationBackup();

	
};


#endif
