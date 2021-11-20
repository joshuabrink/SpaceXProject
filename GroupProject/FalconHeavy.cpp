#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(CompositeStage* stage, double cost):Rocket(stage,cost)
{
}

Rocket* FalconHeavy::clone()
{
	CompositeStage* temp = new CompositeStage(getStage());
	Rocket* out = new FalconHeavy(temp, getCost());
	out->setDestination(getDestination()->clone());

	return out;
}

void FalconHeavy::Launch()
{
	if (getDestination() == nullptr) {
		cout << "Please set a destination before launch!" << endl;
		return;
	}

	if (getLaunch()) {
		cout << "Falcon Heavy already launched" << endl;
	}
	else {
		cout << "Launching Falcon Heavy" << endl;
		setLaunch(true);
	}
}

void FalconHeavy::Interrupt()
{
	if (getLaunch()) {
		cout << "Aborting Falcon Heavy launch! " << endl;
		setLaunch(false);
	}
	else {
		cout << "Falcon Heavy launch hasn't started yet" << endl;
	}
}