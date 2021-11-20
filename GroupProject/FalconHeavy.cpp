#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(CompositeStage* stage, double cost):Rocket(stage,cost)
{
}

Rocket* FalconHeavy::clone()
{
	return nullptr;
}
