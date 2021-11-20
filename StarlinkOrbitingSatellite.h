/** @file StarlinkOrbitingSatellite.h
 *  @class StarlinkOrbitingSatellite
 *  @headerfile  StarlinkOrbitingSatellite.h "StarlinkOrbitingSatellite.h"
 *  @brief StarlinkOrbitingSatellite is a concrete prototype participant in the Prototype design pattern
 *  @brief StarlinkOrbitingSatellite is a concrete colleague participant the Mediator design pattern
 *
 *  StarlinkOrbitingSatellite implements the interface for cloning.
 *  StarlinkOrbitingSatellite also implements the interface for colleague objects.
 *
 *   
 *   @author Tshegofatso Manthata
 *   @author Joshua Brink
 *  @bug No known bugs.
 */
#ifndef STARLINKORBITINGSATELLITE_H
#define STARLINKORBITINGSATELLITE_H
#include <iostream>

#include "StarlinkCommunication.h"
#include "CommuncationNetwork.h"

class FalconRockets;
static int StarlinkOrbitingSatelliteId = 0;
class StarlinkOrbitingSatellite : public StarlinkCommunication
{

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