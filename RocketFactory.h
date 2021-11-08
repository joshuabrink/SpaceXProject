#ifndef ROCKETFACTORY_H
#define  ROCKETFACTORY_H

#include "Rocket";

using namespace std;

class RocketFactory
{
public:
	RocketFactory() {

	}

	~RocketFactory() {


	}
	
	virtual Rocket* createRocket() = 0;

private:

};

#endif 

