#include "VacuumMerlinEngine.h"

VacuumMerlinEngine::VacuumMerlinEngine() {};

VacuumMerlinEngine::VacuumMerlinEngine(double C) : ModifiedMerlinEngine(C) {
	cout << "Creating VacuumMerlinEngine at cost: "<< fixed << setprecision(2) << getCost() << endl;
};

VacuumMerlinEngine::~VacuumMerlinEngine() {};