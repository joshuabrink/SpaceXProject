#ifndef PAYLOADFACTORY_H
#define PAYLOADFACTORY_H
#include <iostream>
#include "Payload.h"

using namespace std;

class PayloadFactory
{
public:
	PayloadFactory();
	~PayloadFactory();

	virtual Payload* createPayload(string, double) = 0;

};

#endif
