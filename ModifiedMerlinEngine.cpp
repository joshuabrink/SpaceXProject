#include "ModifiedMerlinEngine.h"

ModifiedMerlinEngine::ModifiedMerlinEngine() {
	engines = nullptr;
}

ModifiedMerlinEngine::ModifiedMerlinEngine(double C) : Engine(C)
{
	engines = nullptr;
}

double ModifiedMerlinEngine::totalCost() {
	if (engines == nullptr)
	{
		return getCost();
	}
	else
	{
		return getCost() + engines->totalCost();
	}
}

void ModifiedMerlinEngine::addEngine(Engine* E) {
	if (engines == nullptr)
	{
		engines = E;
	}
	else {
		engines->addEngine(E);
	}
}

ModifiedMerlinEngine::~ModifiedMerlinEngine() {
	delete engines;
}