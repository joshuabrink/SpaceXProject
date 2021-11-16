#include "ConcreteSatelliteIterator.h"

ConcreteSatelliteIterator::ConcreteSatelliteIterator(/* args */)
{
/**
 * @author      Tshegofatso Manthata
 * @brief       This is the Concrete Satellite Iterator constructor
 * @todo        initialize the attributes "first,next,curr and last" to null
 */
     first=next=curr=last=nullptr;
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

    return first;
}
Satellite* ConcreteSatelliteIterator::lastSat()
{
    return last;
}
Satellite* ConcreteSatelliteIterator::current()
{
    return curr;
}
Satellite* ConcreteSatelliteIterator::nextSat()
{
    return next;
}


ConcreteSatelliteIterator::~ConcreteSatelliteIterator()
{
}
