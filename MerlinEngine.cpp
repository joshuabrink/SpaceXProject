#include "MerlinEngine.h"

MerlinEngine::MerlinEngine(){}

MerlinEngine::MerlinEngine(double C) : Engine(C) {
	cout << "Creating MerlinEngine at cost: " << getCost() << endl;
}

MerlinEngine::MerlinEngine(const MerlinEngine& E) : Engine(E.cost) {}

MerlinEngine::~MerlinEngine() {

}

void MerlinEngine::addEngine(Engine* E) {

}

double MerlinEngine::totalCost() {
	return getCost();
}
