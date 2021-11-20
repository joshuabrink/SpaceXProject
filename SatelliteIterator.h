#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H
#include "SatelliteCollection.h"
#include "StarlinkOrbitingSatellite.h"
#include <iostream>
using namespace std;
/**
 * @author Tshegofatso Manthata
 * @todo fix the errors by wednesday
 * @todo implement the iterator properly
 */

class SatelliteCollection;
class SatelliteIterator
{

    protected:
   
    StarlinkOrbitingSatellite* first;
    StarlinkOrbitingSatellite* next;
    StarlinkOrbitingSatellite* curr;
public:
    SatelliteIterator(SatelliteCollection* cn);
    virtual StarlinkOrbitingSatellite* firstSat()=0;
    virtual StarlinkOrbitingSatellite* nextSat()=0;
    virtual StarlinkOrbitingSatellite* current()=0;

    ~SatelliteIterator();
};






#endif