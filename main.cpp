#include "ConcretePayloadFactory.h"
#include "ConcreteRocketFactory.h"
#include "ConcreteSpaceCraftFactory.h"

#include "TransportEntities.h"

using namespace std;

void createFactories() {
	PayloadFactory* SatelliteFact = new SatellitesFactory;
	PayloadFactory* SuppliesFact = new SuppliesFactory;

	RocketFactory* Falcon9Fact = new Falcon9Factory;
	RocketFactory* FalconHeavyFact = new FalconHeavyFactory;

	SpaceCraftFactory* DragonFact = new DragonFactory;
	SpaceCraftFactory* CrewDragonFact = new CrewDragonFactory;


	Payload** payLoad = new Payload * [3];

	payLoad[0] = SatelliteFact->createPayload("Starlink Satelite", 300000000);
	payLoad[1] = SuppliesFact->createPayload("Food supply", 50000);
	payLoad[2] = SuppliesFact->createPayload("Oxygen supply", 2000000);


	Rocket** rockets = new Rocket * [4];

	rockets[0] = Falcon9Fact->createRocket(3000000);
	rockets[1] = Falcon9Fact->createRocket(3000000);
	rockets[2] = FalconHeavyFact->createRocket(5000000);
	rockets[3] = FalconHeavyFact->createRocket(5000000);


	SpaceCraft** spaceCraft = new SpaceCraft * [2];
	spaceCraft[0] = DragonFact->createSpaceCraft(5000000, 400);
	spaceCraft[1] = CrewDragonFact->createSpaceCraft(8000000, 10);
}


void createTransportEntities() {
	TransportEntities** crew = new TransportEntities * [5];
	TransportEntities** cargo = new TransportEntities * [2];

	crew[0] = new Crew("Susan", "Electrical Engineer");
	crew[1] = new Crew("John", "Mission Specialist 1");
	crew[2] = new Crew("Victor", "Mission Specialist 2");
	crew[3] = new Crew("Kjell", "Spacecraft Commander");
	crew[4] = new Crew("Michael", "Pilot");

	cargo[0] = new Cargo("Food");
	cargo[1] = new Cargo("Oxygen");
	cargo[2] = new Cargo("Tools");
}


int main() {

	createFactories();
	createTransportEntities();




	return 0;
}