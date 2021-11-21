#include "Engine.h"

Engine::Engine() {
	this->cost = 0;
	this->name = "engine";
}

Engine::Engine(double C) {
    this->cost = C;
    this->name = "engine";
}


Engine::~Engine() {

}

double Engine::getCost() {
	return this->cost;
}

string Engine::getName(){ 
	return this->name;
}


