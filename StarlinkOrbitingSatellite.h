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
 */ 
class StarlinkOrbitingSatellite: public StarlinkCommunication,public Satellite
{
    
private:
    vector<Satellite*> head;
public:
    StarlinkOrbitingSatellite(/* args */);
    //mediator functions
    void Communicate(string message,string communication) override;
    void ReceivedMessage() override;
    //prototype functions
    Satellite* clone() override;

    //iterator functions
    SatelliteIterator* createIterator() override;
    void addList(Satellite*)override;

    bool operator==(const CommuncationNode &rhs) const;
    ~StarlinkOrbitingSatellite();
};


#endif