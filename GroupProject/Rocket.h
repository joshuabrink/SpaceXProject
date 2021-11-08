#ifndef ROCKET_H
#define ROCKET_H

#include <string>
#include <iostream>
using namespace std;

class Rocket {
private:
	string destination;
public:
	virtual void Launch()=0;
	virtual void Interrupt()=0;
	virtual void NextStage() =0;
	void setDestination(string d);

	string getDestination();
};

#endif
