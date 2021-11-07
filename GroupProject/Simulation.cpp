#include "Simulation.h"

Simulation::Simulation()
{
}

Simulation::~Simulation()
{
}

SimulationBackup* Simulation::makeBackup()
{
	
}

void Simulation::restore(SimulationBackup*)
{
}

void Simulation::Build()
{
	buildCommand->execute();
}

void Simulation::Destination()
{
	setDestinationCommand->execute();
}

void Simulation::Launch()
{
	launchCommand->execute();
}

void Simulation::Interrupt()
{
	interruptCommand->execute();
}

void Simulation::nextStage()
{
	nextStageCommand->execute();
}

void Simulation::setBuild(Command* c)
{
	buildCommand = c;
}

void Simulation::setDestination(Command* c)
{
	setDestinationCommand = c;
}

void Simulation::setLaunch(Command* c)
{
	launchCommand = c;
}

void Simulation::setInterrupt(Command* c)
{
	interruptCommand = c;
}

void Simulation::setnextStage(Command* c)
{
	setDestinationCommand = c;
}
