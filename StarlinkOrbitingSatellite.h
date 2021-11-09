#ifndef STARLINKORBITINGSATELLITE_H
#define STARLINKORBITINGSATELLITE_H

#include "StarlinkCommunication.h"
#include "Satellite.h"
#include "ConcreteSatelliteIterator.h"

class StarlinkOrbitingSatellite: public StarlinkCommunication,public Satellite
{
private:
    /* data */
public:
    StarlinkOrbitingSatellite(/* args */);
    void Communicate(string message,string communication) override;
    Satellite* clone() override;
    SatelliteIterator* createIterator() override;
    ~StarlinkOrbitingSatellite();
};


#endif