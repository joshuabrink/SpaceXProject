#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include <iostream>
using namespace std;

class SpaceCraft
{
public:
	SpaceCraft();
	SpaceCraft(double,int);
	~SpaceCraft();

	double getCost();
	int getCapacity();

private:
	double cost;
	int capacity;
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
