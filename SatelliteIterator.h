#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H
#include "Satellite.h"
#include <iostream>
using namespace std;
/**
 * @author Tshegofatso Manthata
 * @todo fix the errors by wednesday
 * @todo implement the iterator properly
 */
class Satellite;
class SatelliteIterator
{
    friend class Satellite;

    protected:
    
    Satellite* first;
    Satellite* next;
    Satellite* curr;
public:
    SatelliteIterator();
    virtual Satellite* firstSat()=0;
    virtual Satellite* nextSat()=0;
    virtual Satellite* current()=0;

    ~SatelliteIterator();
};






#endif