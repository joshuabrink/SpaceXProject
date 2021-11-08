#include "Rocket.h"

void Rocket::setDestination(string d)
{
	destination = d;
	cout << "Destination set to " + d << endl;
}

string Rocket::getDestination()
{
	return destination;
}
