#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include <iostream>
#include <iomanip>
#include <TransportEntityCollection.h>
using namespace std;

class SpaceCraft
{
public:
	SpaceCraft();
	SpaceCraft(double,int);
	~SpaceCraft();

	double getCost();
	int getCapacity();

	void setTEC(TransportEntityCollection* trec);
	TransportEntityCollection* getTEC();

private:
	double cost;
	int capacity;
	TransportEntityCollection* tec;
};


class Dragon : public SpaceCraft
{
public:
	Dragon();
	Dragon(double, int);
	~Dragon();

};

class DragonCrew : public SpaceCraft
{
public:
	DragonCrew();
	DragonCrew(double ,int);
	~DragonCrew();

};

#endif 
