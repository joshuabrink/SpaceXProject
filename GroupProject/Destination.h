#ifndef DESTINATION_H
#define DESTINATION_H

#include <string>
using namespace std;

class Destination {
public:
	Destination() {};
	virtual Destination* clone()=0;
	virtual string getDestination() = 0;
	virtual ~Destination() {};
};

#endif
