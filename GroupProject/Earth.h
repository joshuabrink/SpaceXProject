#ifndef EARTH_H
#define EARTH_H

#include "Destination.h"

class Earth : public Destination {
public:
	string getDestination();
	Destination* clone();
};

#endif
