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
    StarlinkOrbitingSatellite* last;
public:
    SatelliteIterator(SatelliteCollection* cn);
    virtual StarlinkOrbitingSatellite* firstSat()=0;
    virtual StarlinkOrbitingSatellite* nextSat()=0;
    virtual StarlinkOrbitingSatellite* current()=0;
    virtual StarlinkOrbitingSatellite* lastSat()=0;


    ~SatelliteIterator();
};

SatelliteIterator::SatelliteIterator(SatelliteCollection* cn)
{
  
     first=next=curr=nullptr;
     
    
   
}
SatelliteIterator::~SatelliteIterator()
{
  /*  delete first;
    delete curr;
    delete next;*/
}





#endif