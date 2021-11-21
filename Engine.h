#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Engine
{
public:
	Engine();
	Engine(double);
	virtual ~Engine();
	virtual double totalCost() = 0;
	virtual void addEngine(Engine*) = 0;
	string getName();
	double getCost();

protected:
	string name;
	double cost;
};

#endif