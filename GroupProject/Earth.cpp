#include "Earth.h"

string Earth::getDestination()
{
	return "Earth";
}

Destination* Earth::clone()
{
	return new Earth();
}
