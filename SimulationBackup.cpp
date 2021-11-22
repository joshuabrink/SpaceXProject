#include "SimulationBackup.h"

SimulationBackup::SimulationBackup(Rocket* rocket,double price)
{
	this->myRocket = rocket->clone();
	this->price = price;
}

SimulationBackup::~SimulationBackup()
{
}

Rocket *SimulationBackup::getMyRocket() const {
    return myRocket;
}

void SimulationBackup::setMyRocket(Rocket *myRocket) {
    SimulationBackup::myRocket = myRocket;
}

double SimulationBackup::getPrice() const {
    return price;
}

void SimulationBackup::setPrice(double price) {
    SimulationBackup::price = price;
}
