#ifndef STARLINKORBITINGSATELLITE_H
#define STARLINKORBITINGSATELLITE_H

#include "StarlinkCommunication.h"
#include "Satellite.h"

class StarlinkOrbitingSatellite: public StarlinkCommunication,public Satellite
{
private:
    /* data */
public:
    StarlinkOrbitingSatellite(/* args */);
    void Communicate(string message,string communication) override;
    Satellite* clone() override;
    ~StarlinkOrbitingSatellite();
};

StarlinkOrbitingSatellite::StarlinkOrbitingSatellite(/* args */)
{
}

void  StarlinkOrbitingSatellite::Communicate(string message,string communication)
{
    
}
StarlinkOrbitingSatellite::~StarlinkOrbitingSatellite()
{
}


#endif