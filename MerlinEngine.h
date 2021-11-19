#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include <iostream>
#include "Engine.h"

using namespace std;

class MerlinEngine : public Engine
{
public:
	MerlinEngine();
	MerlinEngine(double);
	virtual double totalCost();
	virtual void addEngine(Engine*);
	~MerlinEngine();
};

#endif
