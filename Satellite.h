#ifndef SATELLITE_H
#define SATELLITE_H
#include <iostream>
#include <vector>
using namespace std;
#include "SatelliteIterator.h"
#include "CommuncationNode.h"
/**
 * THE LEDS :
 *  Prototype participant in the prototype
 *
 *  TODO: define a pure virtual clone()
 */
class FalconRockets;
class SatelliteIterator;
class Satellite
{
private:
    

protected:
    bool isLaunched;
    int id;

public:
    Satellite(/* args */);
    bool launchSatellite(FalconRockets *transport);
    virtual Satellite *clone() = 0;
    virtual SatelliteIterator *createIterator() = 0;
    virtual void addList(Satellite *) = 0;
   
    ~Satellite();
};

#endif