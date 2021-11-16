#ifndef CONCRETESATELLITEITERATOR_H
#define CONCRETESATELLITEITERATOR_H
#include "SatelliteIterator.h"
/**
 * @author Tshegofatso Manthata
 * 
 * 
 */
class ConcreteSatelliteIterator:public SatelliteIterator
{

public:
    ConcreteSatelliteIterator(/* args */);
    Satellite* firstSat() override;
    Satellite* lastSat() override;
    Satellite* nextSat() override;
    Satellite* current() override;
    ~ConcreteSatelliteIterator();
};



#endif