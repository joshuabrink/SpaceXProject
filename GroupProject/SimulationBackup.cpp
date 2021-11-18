#include "SimulationBackup.h"

SimulationBackup::SimulationBackup(Rocket* rocket,float price)
{
	this->myRocket = rocket->clone();
	this->price = price;
}

SimulationBackup::~SimulationBackup()
{
}
