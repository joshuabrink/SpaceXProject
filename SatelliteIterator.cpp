#include "SatelliteIterator.h"

SatelliteIterator::SatelliteIterator(/* args */)
{
    first=next=curr=last=nullptr;
   
}

SatelliteIterator::~SatelliteIterator()
{
    delete first;
    delete last;
    delete curr;
    delete next;
}