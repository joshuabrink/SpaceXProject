#include "ConcreteSatelliteIterator.h"

ConcreteSatelliteIterator::ConcreteSatelliteIterator(/* args */)
{
     first=next=curr=last=nullptr;
}
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
