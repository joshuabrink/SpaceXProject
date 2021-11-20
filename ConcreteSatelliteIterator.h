#ifndef CONCRETESATELLITEITERATOR_H
#define CONCRETESATELLITEITERATOR_H
#include "SatelliteIterator.h"
#include <iostream>
using namespace std;

/**
 * @author      Tshegofatso Manthata
 * @headerfile  ConcreteSatelliteIterator.h "ConcreteSatelliteIterator.h"
 * @brief       This is the Concrete Iterator
 * @todo        Implements the SatelliteIterator
 *
 */
class ConcreteSatelliteIterator : public SatelliteIterator
{

private:
   SatelliteCollection* sc;
    int trav;
public:
    ConcreteSatelliteIterator(SatelliteCollection* cn);
    StarlinkOrbitingSatellite *firstSat() override;
    StarlinkOrbitingSatellite *nextSat() override;
    StarlinkOrbitingSatellite *current() override;
    ~ConcreteSatelliteIterator();
};
#include "ConcreteSatelliteIterator.h"
ConcreteSatelliteIterator::ConcreteSatelliteIterator(SatelliteCollection* cn):SatelliteIterator(cn)
{
    sc=cn;
     first=next=curr=nullptr;
     trav=0;
     
}
/**
 * @author      Tshegofatso Manthata
 * @class       ConcreteSatelliteIterator
 * 
 * @fn          Satellite* ConcreteSatelliteIterator::firstSat()
 * @brief       This is the firstSat() function
 * @todo        return the first satellite in the linked list
 * @return      A Satellite pointer
 */
StarlinkOrbitingSatellite* ConcreteSatelliteIterator::firstSat()
{
    first=*(sc->getVector().begin());
    trav=0;
}

StarlinkOrbitingSatellite* ConcreteSatelliteIterator::current()
{
   int i=0;
    vector<StarlinkOrbitingSatellite*>::iterator now=sc->getVector().begin();
    while(i<trav)
    {
        ++now;
        ++i;
    }
    curr=*now;
    return curr;
    
}
StarlinkOrbitingSatellite* ConcreteSatelliteIterator::nextSat()
{
   ++trav;
   int i=0;
    vector<StarlinkOrbitingSatellite*>::iterator now=sc->getVector().begin();
    while(i<trav)
    {
        ++now;
        ++i;
    }
    next=*now;
    return next;

}


ConcreteSatelliteIterator::~ConcreteSatelliteIterator()
{
}


#endif