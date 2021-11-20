#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(CompositeStage* stage, double cost):Rocket(stage,cost)
{
}

Rocket* FalconHeavy::clone()
{
	CompositeStage* temp = new CompositeStage(getStage());
	Rocket* out = new Falcon9(temp, getCost());
	out->setDestination(getDestination()->clone());

	return out;
}
