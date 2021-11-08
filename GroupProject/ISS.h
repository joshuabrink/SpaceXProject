#ifndef ISS_H
#define ISS_H

#include "Destination.h"

class ISS : public Destination {
public:
	string getDestination() { return "International Space Station"; };
};

#endif
