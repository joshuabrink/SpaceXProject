#include "MerlinEngine.h"

MerlinEngine::MerlinEngine(){}

MerlinEngine::MerlinEngine(double C) : Engine(C) {
}

MerlinEngine::MerlinEngine(const MerlinEngine& E) : Engine(E.cost) {}

MerlinEngine::~MerlinEngine() {

}

void MerlinEngine::addEngine(Engine* E) {

}

double MerlinEngine::totalCost() {
	return getCost();
}
