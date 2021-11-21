#ifndef ROCKETFACTORY_H
#define  ROCKETFACTORY_H
#include <iostream>
#include "Rocket.h"

using namespace std;

class RocketFactory
{
public:
	RocketFactory();
	~RocketFactory();
	
	virtual Rocket* createRocket(double) = 0;

private:

};

#endif 
