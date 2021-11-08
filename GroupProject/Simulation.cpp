#include "Simulation.h"

Simulation::Simulation(Destination* d):destination(d),rocket(nullptr)
{
}

Simulation::~Simulation()
{
}

SimulationBackup* Simulation::makeBackup()
{
	return new SimulationBackup(destination,rocket);
}

void Simulation::restore(SimulationBackup*)
{
}

Destination* Simulation::getTripDestination()
{
	return destination;
}

void Simulation::setTripDestination(Destination* D)
{
	destination = D;
}

Rocket* Simulation::getRocket()
{
	return rocket;
}

void Simulation::setRocket(Rocket* R)
{
	rocket = R;
}

void Simulation::Build()
{
	buildCommand->execute();
}

void Simulation::DestinationCommand()
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
