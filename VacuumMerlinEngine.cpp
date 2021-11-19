#include "VacuumMerlinEngine.h"

VacuumMerlinEngine::VacuumMerlinEngine() {};

VacuumMerlinEngine::VacuumMerlinEngine(double C) : ModifiedMerlinEngine(C) {
	cout << "Creating VacuumMerlinEngine at cost: "<< getCost() << endl;
};

VacuumMerlinEngine::~VacuumMerlinEngine() {};