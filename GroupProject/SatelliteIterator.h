#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H
//#include "SatelliteCollection.h"
#include "StarlinkOrbitingSatellite.h"
#include <vector>
#include <iostream>
using namespace std;
/**
 * @author Tshegofatso Manthata
 * @todo fix the errors by wednesday
 * @todo implement the iterator properly
 */

class SatelliteIterator
{

    protected:
    vector<StarlinkOrbitingSatellite*> it;
    StarlinkOrbitingSatellite* first;
    StarlinkOrbitingSatellite* next;
    StarlinkOrbitingSatellite* curr;
    StarlinkOrbitingSatellite* last;
public:
    SatelliteIterator();
    virtual StarlinkOrbitingSatellite* firstSat()=0;
    virtual StarlinkOrbitingSatellite* nextSat()=0;
    virtual StarlinkOrbitingSatellite* current()=0;
    virtual StarlinkOrbitingSatellite* lastSat()=0;
    void addList(StarlinkOrbitingSatellite*);


    ~SatelliteIterator();
};

SatelliteIterator::SatelliteIterator()
{
  
     first=next=curr=nullptr;

}
void SatelliteIterator::addList(StarlinkOrbitingSatellite* sos)
{
    cout<<"in here\n";
    it.push_back(sos);
}
SatelliteIterator::~SatelliteIterator()
{
  /*  delete first;
    delete curr;
    delete next;*/
}





#endif