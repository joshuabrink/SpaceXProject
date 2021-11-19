#ifndef CONCRETEPAYLOADFACTORY_H
#define CONCRETEPAYLOADFACTORY_H

#include "PayloadFactory.h"
#include <iostream>
using namespace std;

class SuppliesFactory : public PayloadFactory
{
public:
	SuppliesFactory();
	~SuppliesFactory();

	Payload* createPayload(string, double);
private:

};


class SatellitesFactory : public PayloadFactory
{
public:
	SatellitesFactory();
	~SatellitesFactory();

	Payload* createPayload(string,double);
private:

};


#endif 

