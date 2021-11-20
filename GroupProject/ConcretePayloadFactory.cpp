#include "ConcretePayloadFactory.h"

SuppliesFactory::SuppliesFactory() {

}

SuppliesFactory::~SuppliesFactory() {

}

Payload* SuppliesFactory::createPayload(string Description, double Cost) {
	return new Supplies(Description,Cost);
}


SatellitesFactory::SatellitesFactory() {
	
}

SatellitesFactory::~SatellitesFactory() {

}

Payload* SatellitesFactory::createPayload(string Description, double Cost) {
	return new Satellite(Description, Cost);
}



