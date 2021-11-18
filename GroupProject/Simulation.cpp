#include "Simulation.h"

Simulation::Simulation(Rocket* r):rocket(r)
{
}

Simulation::~Simulation()
{
}

SimulationBackup* Simulation::makeBackup()
{
	return new SimulationBackup(rocket,price);
}

void Simulation::restore(SimulationBackup* backup)
{
	this->price = backup->price;
	this->rocket = backup->myRocket;
}

Destination* Simulation::getTripDestination()
{
	return rocket->getDestination();
}

void Simulation::setTripDestination(Destination* D)
{
	rocket->setDestination(D);
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
