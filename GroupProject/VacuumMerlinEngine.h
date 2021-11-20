#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H

#include <iostream>

#include "ModifiedMerlinEngine.h"

using namespace std;

class VacuumMerlinEngine : public ModifiedMerlinEngine
{
public:
	VacuumMerlinEngine();
	VacuumMerlinEngine(double);
	VacuumMerlinEngine(const VacuumMerlinEngine& e){this->cost = e.cost;};
	~VacuumMerlinEngine();

};

#endif