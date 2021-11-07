#ifndef SIMULATION_H
#define SIMULATION_H

#include "SimulationBackup.h"
#include "Command.h"

class Simulation {
private:
	Command* buildCommand;
	Command* setDestinationCommand;
	Command* launchCommand;
	Command* interruptCommand;
	Command* nextStageCommand;
	/*TODO: necessary variables to be added*/
public:

	void Build();
	void Destination();
	void Launch();
	void Interrupt();
	void nextStage();

	void setBuild(Command*);
	void setDestination(Command*);
	void setLaunch(Command*);
	void setInterrupt(Command*);
	void setnextStage(Command*);

	/*add getters and setters for the variables */
	Simulation();
	virtual ~Simulation();

	SimulationBackup* makeBackup();
	void restore(SimulationBackup*);

};

#endif
