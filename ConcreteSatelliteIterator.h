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
class ConcreteSatelliteIterator:public SatelliteIterator
{
    friend class Satellite;
    private:
    vector<Satellite*> list;
    int trav;

public:
    ConcreteSatelliteIterator();
    Satellite* firstSat() override;
    Satellite* nextSat() override;
    Satellite* current() override;
    ~ConcreteSatelliteIterator();
};



#endif