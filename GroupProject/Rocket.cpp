#include "Rocket.h"

void Rocket::setDestination(Destination* d)
{
	destination = d;
	cout << "Destination set to " + d->getDestination() << endl;
}

string Rocket::getDestination()
{
    return destination->getDestination();
    
}
