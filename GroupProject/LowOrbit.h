#ifndef LOWORBIT_H
#define LOWORBIT_H

#include "Destination.h"

class LowOrbit : public Destination{
public:
	string getDestination() { return "Low Orbit"; };
};

#endif
