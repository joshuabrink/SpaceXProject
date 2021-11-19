#include "ConcreteRocketFactory.h"

Falcon9Factory::Falcon9Factory(){

}

Falcon9Factory::~Falcon9Factory(){

}

Rocket* Falcon9Factory::createRocket(double C) {
	return new Falcon9(C);
}


FalconHeavyFactory::FalconHeavyFactory(){

}

FalconHeavyFactory::~FalconHeavyFactory(){

}

Rocket* FalconHeavyFactory::createRocket(double C) {
	return new FalconHeavy(C);
}