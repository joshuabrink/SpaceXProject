#include "ConcreteRocketFactory.h"

Falcon9Factory::Falcon9Factory(){

}

Falcon9Factory::~Falcon9Factory(){

}

/**
 * @todo add functionality to return new falcon9
 * @return
 */
Rocket* Falcon9Factory::createRocket() {
	//return new Falcon9();
	return nullptr;
}


FalconHeavyFactory::FalconHeavyFactory(){

}

FalconHeavyFactory::~FalconHeavyFactory(){

}


/**
 * @todo add functionality to return heavy rocket
 * @return
 */

Rocket* FalconHeavyFactory::createRocket() {
	//return new FalconHeavy();
	return nullptr;
}