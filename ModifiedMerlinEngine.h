#ifndef MODIFIEDMERLINENGINE_H
#define MODIFIEDMERLINENGINE_H

#include "Engine.h"

using namespace std;

class ModifiedMerlinEngine : public Engine
{
public:
	ModifiedMerlinEngine();
	ModifiedMerlinEngine(double);
	virtual double totalCost();
	virtual void addEngine(Engine*);
	
protected:
	~ModifiedMerlinEngine();
private:
	Engine* engines;
};

#endif
