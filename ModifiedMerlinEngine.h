#ifndef MODIFIEDMERLINENGINE_H
#define MODIFIEDMERLINENGINE_H
#include <iostream>
#include "Engine.h"

using namespace std;

class ModifiedMerlinEngine : public Engine
{
public:
	ModifiedMerlinEngine();
	ModifiedMerlinEngine(double);
	ModifiedMerlinEngine(const ModifiedMerlinEngine& E);
	~ModifiedMerlinEngine();

	virtual double totalCost();
	virtual void addEngine(Engine*);

private:
	Engine* engines;
};

#endif
