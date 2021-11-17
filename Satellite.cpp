#include "Satellite.h"

Satellite::Satellite(/* args */)
{
    isLaunched=false;
    id=counter;
    counter++;
}
bool Satellite::launchSatellite(FalconRockets* transport)
{
    /**
     *TODO:launch the satellite
     * 
     */

    return isLaunched;
}
int Satellite::getid()
{
    return id;
}
Satellite::~Satellite()
{
}