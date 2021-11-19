#include "Engine.h"

Engine::Engine() {
	this->cost = 0;
}

Engine::Engine(double C) {
	this->cost = C;
}

Engine::~Engine() {

}

double Engine::getCost() {
	return this->cost;
}

string Engine::getName(){ 
	return this->name;
}


