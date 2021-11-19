#ifndef STARLINKORBITINGSATELLITE_H
#define STARLINKORBITINGSATELLITE_H
#include <iostream>
// #include <vector>
// using namespace std;
// #include "StarlinkOrbitingSatelliteIterator.h"
#include "StarlinkCommunication.h"
#include "CommuncationNetwork.h"
/**
 * THE LEDS :
 *  Prototype participant in the prototype
 *
 *  TODO: define a pure virtual clone()
 */
class FalconRockets;
// class StarlinkOrbitingSatelliteIterator;
static int StarlinkOrbitingSatelliteId = 0;
class StarlinkOrbitingSatellite : public StarlinkCommunication
{
/**
 * @author      Tshegofatso Manthata
 * @headerfile  StarlinkOrbitingSatellite.h "StarlinkOrbitingSatellite.h"
 * @brief       This is a concrete collegue for the Mediator pattern
 * @brief       This is a concrete prototype for the Prototype pattern
 * @brief       This is a concrete aggregate for the iterator pattern
 * @todo        Implements the SatelliteIterator 
 */ 
private:
    bool isLaunched;

public:
    StarlinkOrbitingSatellite() : StarlinkCommunication(StarlinkOrbitingSatelliteId++)
    {
        isLaunched = false;
    };
    StarlinkOrbitingSatellite(const int id) : StarlinkCommunication(id){};
    void communicate(std::string message, int id = -1) override
    {
        // if (isLaunched)
        // {
            std::cout << "StarlinkOrbitingSatellite " << this->id << " sent message" << std::endl;
            // if (id == -1)
            // {
            comunicationNetwork->broadcast(message, id);
        // }

        // }
    };
    void receivedMessage(std::string message) override
    {
        // std::cout << "StarlinkOrbitingSatellite ";

        std::cout << "StarlinkOrbitingSatellite " << id << " received message: " << message << std::endl;
        // comunicationNetwork->broadcast(message);
        // std::cout << id << " received message" << message << std::endl;
    };
    
    
    // bool launchStarlinkOrbitingSatellite(FalconRockets *transport){return true;};


    // virtual StarlinkOrbitingSatelliteIterator *createIterator() = 0;
    // virtual void addList(StarlinkOrbitingSatellite *) = 0;
    StarlinkCommunication *clone() { return new StarlinkOrbitingSatellite(this->id); };
    // bool operator==(const StarlinkCommunication &rhs) const
    // {
    //     return id == rhs.id;
    // };
    ~StarlinkOrbitingSatellite(){};
};

#endif