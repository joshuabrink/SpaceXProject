#include "ConcreteRocketFactory.h"
Falcon9Factory::Falcon9Factory(){

}

Falcon9Factory::~Falcon9Factory(){

}

/**
 * @todo implement fix here
 *
 * @param C
 * @return
 */
Rocket* Falcon9Factory::createRocket(double C) {
	return new Falcon9(C);
}


FalconHeavyFactory::FalconHeavyFactory(){

}

FalconHeavyFactory::~FalconHeavyFactory(){

}
/**
 * @todo implement fix here
 * @param C
 * @return
 */
Rocket* FalconHeavyFactory::createRocket(double C) {
	return new FalconHeavy(C);
}