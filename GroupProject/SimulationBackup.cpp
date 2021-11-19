#include "SimulationBackup.h"

SimulationBackup::SimulationBackup(Rocket* rocket,double price)
{
	this->myRocket = rocket->clone();
	this->price = price;
}

SimulationBackup::~SimulationBackup()
{
}
