#ifndef SATELLITE_H
#define SATELLITE_H
#include <iostream>
using namespace std;
/**
 * THE LEDS :
 *  Prototype participant in the prototype
 * 
 *  TODO: define a pure virtual clone()
 */
class FalconRockets;
class Satellite
{
protected:
    bool isLaunched; 
public:
    Satellite(/* args */);
    bool launchSatellite( FalconRockets* transport);
    virtual Satellite* clone()=0;
    ~Satellite();
};

Satellite::Satellite(/* args */)
{
    isLaunched=false;
}
bool Satellite::launchSatellite(FalconRockets* transport)
{
    /**
     *TODO:launch the satellite
     * 
     */

    return isLaunched;
}
Satellite::~Satellite()
{
}

#endif