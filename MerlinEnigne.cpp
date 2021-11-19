#include "MerlinEngine.h"

MerlinEngine::MerlinEngine() {}

MerlinEngine::MerlinEngine(double C) : Engine(C) {}

MerlinEngine::~MerlinEngine() {

}

void MerlinEngine::addEngine(Engine* E) {

}

double MerlinEngine::totalCost() {
	return getCost();
}
