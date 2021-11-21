#include "Rocket.h"
Rocket::Rocket(CompositeStage* stage, double cost)
{
	this->stage = stage;
	isLaunch = false;
	destination = nullptr;
	this->cost = cost;
}

SpaceCraft* Rocket::unloadSpaceCraft()
{
    SpaceCraft* returner = spaceCraft;
    spaceCraft = nullptr;
    return returner;
}

void Rocket::loadSpaceCraft(SpaceCraft *sc)
{
    spaceCraft = sc;
}



void Rocket::addStage(CompositeStage* stage)
{
	this->stage = stage;
}

Rocket::Rocket(double cost)
{
	this->stage = nullptr;
	isLaunch = false;
	destination = nullptr;
	this->cost = cost;
}

void Rocket::NextStage()
{
	if (isLaunch) {
		cout << "Ejecting stage starting next stage." << endl;
		//type mismatch need to fix
		currentStage = stage->getNext();
	}
	else {
		cout << "Rocket needs to be launched." << endl;
	}
}

void Rocket::setDestination(Destination* d)
{
	if (destination == nullptr) {
		destination = d;
		cout << "Destination set to " + d->getDestination() << endl;
	}
	else {
		cout << "Changing destination from " << destination->getDestination() << " to " << d->getDestination() << endl;
		destination = d;
	}
}

Destination* Rocket::getDestination()
{
	return destination;

}

CompositeStage* Rocket::getStage()
{
	return stage;
}

void Rocket::setStage(CompositeStage* c)
{
	if (stage != nullptr) {
		delete stage;
		stage = c;
		currentStage = c->getVal();
	}
	else {
		stage = c;
		currentStage = c->getVal();
	}
}

bool Rocket::getLaunch()
{
	return isLaunch;
}

double Rocket::getCost()
{
	return cost;
}

void Rocket::setCost(double cost)
{
	this->cost = cost;
}

void Rocket::setLaunch(bool launch)
{
	this->isLaunch = launch;
}
