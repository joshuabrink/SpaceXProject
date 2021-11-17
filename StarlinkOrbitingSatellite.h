#ifndef STARLINKORBITINGSATELLITE_H
#define STARLINKORBITINGSATELLITE_H

#include "StarlinkCommunication.h"
#include "Satellite.h"
#include "ConcreteSatelliteIterator.h"
/**
 * @author      Tshegofatso Manthata
 * @headerfile  StarlinkOrbitingSatellite.h "StarlinkOrbitingSatellite.h"
 * @brief       This is a concrete collegue for the Mediator pattern
 * @brief       This is a concrete prototype for the Prototype pattern
 * @brief       This is a concrete aggregate for the iterator pattern
 * @todo        Implements the SatelliteIterator 
 * 
 */
class StarlinkOrbitingSatellite: public StarlinkCommunication,public Satellite
{
private:
    /* data */
public:
    StarlinkOrbitingSatellite(/* args */);
    void Communicate(string message,string communication) override;
    Satellite* clone() override;
    SatelliteIterator* createIterator() override;
    void addList(Satellite*);
    ~StarlinkOrbitingSatellite();
};


#endif