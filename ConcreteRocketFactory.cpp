#include "ConcreteRocketFactory.h"

Falcon9Factory::Falcon9Factory(){

}

Falcon9Factory::~Falcon9Factory(){

}

Rocket* Falcon9Factory::createRocket() {
	return new Falcon9();
}


FalconHeavyFactory::FalconHeavyFactory(){

}

FalconHeavyFactory::~FalconHeavyFactory(){

}

Rocket* FalconHeavyFactory::createRocket() {
	return new FalconHeavy();
}