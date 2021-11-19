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
	~VacuumMerlinEngine();

};

#endif