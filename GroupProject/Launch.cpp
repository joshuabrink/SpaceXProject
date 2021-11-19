#include "Launch.h"

Launch::Launch(Rocket* R)
{
	myRocket = R;
}

void Launch::execute()
{
	myRocket->Launch();
}

Launch::~Launch() {

}
