#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H
#include "Satellite.h"

class Satellite;
class SatelliteIterator
{
protected:
    Satellite* first;
    Satellite* next;
    Satellite* curr;
    Satellite* last;
public:
    SatelliteIterator(/* args */);
    virtual Satellite* firstSat()=0;
    virtual Satellite* lastSat()=0;
    virtual Satellite* nextSat()=0;
    virtual Satellite* current()=0;

    ~SatelliteIterator();
};






#endif