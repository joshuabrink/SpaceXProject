#ifndef CONCRETEROCKETFACTORY_H
#define CONCRETEROCKETFACTORY_H

#include "RocketFactory.h"

using namespace std;

class Falcon9Factory : public RocketFactory
{
public:
	Falcon9Factory();
	~Falcon9Factory();

	Rocket* createRocket();
private:

};

class FalconHeavyFactory : public RocketFactory
{
public:
	FalconHeavyFactory();
	~FalconHeavyFactory();

	Rocket* createRocket();
private:

};


#endif 

