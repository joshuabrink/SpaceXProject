#include "ConcreteSatelliteIterator.h"

ConcreteSatelliteIterator::ConcreteSatelliteIterator(vector<Satellite*> v)
{
/**
 * @author      Tshegofatso Manthata
 * @brief       This is the Concrete Satellite Iterator constructor
 * @todo        initialize the attributes "first,next,curr and last" to null
 */

     list=v;
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
Satellite* ConcreteSatelliteIterator::firstSat()
{
    if(!list.empty())
    {
        first=list.at(0);
        return first;
    }
    else
    return nullptr;
}

Satellite* ConcreteSatelliteIterator::current()
{
    int i=0;
    vector<Satellite*>::iterator now=list.begin();
    while(i<trav)
    {
        ++now;
        ++i;
    }
    curr=*now;
    return curr;


    
}
Satellite* ConcreteSatelliteIterator::nextSat()
{
    ++trav;
   int i=0;
    vector<Satellite*>::iterator now=list.begin();
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
