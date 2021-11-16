#include "SetDestination.h"

SetDestination::SetDestination(Rocket* R, Destination* d)
{
	myRocket = R; 
	destination = d;
}

void SetDestination::execute()
{
	myRocket->setDestination(destination);
}
