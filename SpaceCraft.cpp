#include "SpaceCraft.h"

SpaceCraft::SpaceCraft() {
	this->cost = 0;
	this->capacity = 0;
}

SpaceCraft::SpaceCraft(double Cost, int Capacity) {
	this->cost = Cost;
	this->capacity = Capacity;
}

SpaceCraft::~SpaceCraft() {

}

double SpaceCraft::getCost() {
	return this->cost;
}

int SpaceCraft::getCapacity() {
	return this->capacity;
}


Dragon::Dragon() {

}

Dragon::Dragon(double Cost, int Capacity) : SpaceCraft (Cost,Capacity) {}

Dragon::~Dragon() {

}


DragonCrew::DragonCrew() {

}

DragonCrew::DragonCrew(double Cost, int Capacity) : SpaceCraft(Cost, Capacity) {}

DragonCrew::~DragonCrew() {


}

