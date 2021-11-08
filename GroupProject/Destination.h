#ifndef DESTINATION_H
#define DESTINATION_H

#include <string>
using namespace std;

class Destination {
public:
	Destination() {};
	virtual string getDestination() = 0;
	virtual ~Destination() {};
};

#endif
