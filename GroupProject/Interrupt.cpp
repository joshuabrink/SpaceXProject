#include "Interrupt.h"

Interrupt::Interrupt(Rocket* R)
{
	myRocket = R;
}

void Interrupt::execute()
{
	myRocket->Interrupt();
}
