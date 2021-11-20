#include "NextStage.h"

NextStage::NextStage(Rocket* R)
{
	myRocket = R;
}

void NextStage::execute()
{
	myRocket->NextStage();
}

NextStage::~NextStage() {

}
