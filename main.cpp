#include "ConcretePayloadFactory.h"
#include "ConcreteRocketFactory.h"
#include "ConcreteSpaceCraftFactory.h"

using namespace std;

int main() {

	PayloadFactory* SatelliteFact = new SatellitesFactory;
	PayloadFactory* SuppliesFact = new SuppliesFactory;

	RocketFactory* Falcon9Fact = new Falcon9Factory;
	RocketFactory* FalconHeavyFact = new FalconHeavyFactory;

	SpaceCraftFactory* DragonFact = new DragonFactory;
	SpaceCraftFactory* CrewDragonFact = new CrewDragonFactory;

	Payload** payLoad = new Payload*[3];
	
	payLoad[0] = SatelliteFact->createPayload("Starlink Satelite", 300000000);
	payLoad[1] = SuppliesFact->createPayload("Food supply", 50000);
	payLoad[2] = SuppliesFact->createPayload("Oxygen supply", 2000000);


	Rocket* rockets = new Rocket * [4];

	rockets[0] = Falcon9Fact->createRocket();
	rockets[1] = Falcon9Fact->createRocket();
	rockets[2] = FalconHeavyFact->createRocket();
	rockets[3] = FalconHeavyFact->createRocket();


	SpaceCraft** spaceCraft = new SpaceCraft * [2];
	spaceCraft[0] = DragonFact->createSpaceCraft(5000000,400);
	spaceCraft[1] = CrewDragonFact->createSpaceCraft(8000000,10);




	return 0;
}