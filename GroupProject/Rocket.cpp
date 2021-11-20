#include "Rocket.h"

Rocket::Rocket(CompositeStage* stage)
{
	this->stage = stage;
	isLaunch = false;
	destination = nullptr;
}

void Rocket::Launch()
{
	if (destination == nullptr) {
		cout << "Please set a destination before launch!" << endl;
		return;
	}

	if (isLaunch) {
		cout << "Rocket already launched" << endl;
	}
	else {
		cout << "Launching Rocket" << endl;
		isLaunch = true;
	}
}

void Rocket::Interrupt()
{
	if (isLaunch) {
		cout << "Aborting launch! " << endl;
		isLaunch = false;
	}
	else {
		cout << "Launch hasn't started yet" << endl;
	}
}

void Rocket::NextStage()
{
	if (isLaunch) {
		cout << "Ejecting stage starting next stage." << endl;
		stage = stage->getNext();
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
	}
	else {
		stage = c;
	}
}

bool Rocket::getLaunch()
{
	return isLaunch;
}
