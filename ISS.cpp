#include "ISS.h"

string ISS::getDestination()
{
	return "International Space Station";
}

Destination* ISS::clone()
{
	return new ISS();
}
