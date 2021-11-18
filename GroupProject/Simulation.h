#ifndef SIMULATION_H
#define SIMULATION_H

#include "SimulationBackup.h"
#include "Command.h"
#include "Rocket.h"
#include "Destination.h"

class Simulation {
private:
	Command* buildCommand;
	Command* setDestinationCommand;
	Command* launchCommand;
	Command* interruptCommand;
	Command* nextStageCommand;
	
	Rocket* rocket;
	float price;


public:
	Simulation(Rocket*);
	virtual ~Simulation();

	//memento pattern
	SimulationBackup* makeBackup();
	void restore(SimulationBackup*);

	Destination* getTripDestination();
	void setTripDestination(Destination*);

	Rocket* getRocket();
	void setRocket(Rocket*);

	//command pattern
	void Build();
	void DestinationCommand();
	void Launch();
	void Interrupt();
	void nextStage();

	void setBuild(Command*);
	void setDestination(Command*);
	void setLaunch(Command*);
	void setInterrupt(Command*);
	void setnextStage(Command*);



};

#endif
