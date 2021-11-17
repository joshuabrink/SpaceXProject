#include "SatelliteIterator.h"

SatelliteIterator::SatelliteIterator()
{
    first=next=curr=nullptr;
   
}

SatelliteIterator::~SatelliteIterator()
{
    delete first;
    delete curr;
    delete next;
}