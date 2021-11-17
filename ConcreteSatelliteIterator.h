#ifndef CONCRETESATELLITEITERATOR_H
#define CONCRETESATELLITEITERATOR_H
#include "SatelliteIterator.h"
/**
 * @author      Tshegofatso Manthata
 * @headerfile  ConcreteSatelliteIterator.h "ConcreteSatelliteIterator.h"
 * @brief       This is the Concrete Iterator 
 * @todo        Implements the SatelliteIterator 
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