#ifndef SATELLITE_H
#define SATELLITE_H
#include <iostream>
// #include <vector>
// using namespace std;
// #include "SatelliteIterator.h"
#include "CommuncationNode.h"
#include "CommuncationNetwork.h"
/**
 * THE LEDS :
 *  Prototype participant in the prototype
 *
 *  TODO: define a pure virtual clone()
 */
// class FalconRockets;
// class SatelliteIterator;
static int satelliteId = 0;
class Satellite : public CommuncationNode
{
    // friend class SatelliteIterator;

private:

    bool isLaunched;

public:
    Satellite() : CommuncationNode(satelliteId++)
    {
        isLaunched = false;
    };
    Satellite(const int id) : CommuncationNode(id){};
    void communicate(std::string message, int id = -1) override
    {
        std::cout << "Satellite " << this->id << " sent message" << std::endl;
        // if (id == -1)
        // {
        comunicationNetwork->broadcast(message, id);
        // }
    };
    void receivedMessage(std::string message) override
    {
        // std::cout << "Satellite ";

        std::cout << "Satellite " << id << " received message: " << message << std::endl;
        // comunicationNetwork->broadcast(message);
        // std::cout << id << " received message" << message << std::endl;
    };
    // bool launchSatellite(FalconRockets *transport){return true;};
    // virtual SatelliteIterator *createIterator() = 0;
    // virtual void addList(Satellite*)=0;
    CommuncationNode *clone() { return new Satellite(this->id); };
    // bool operator==(const CommuncationNode &rhs) const
    // {
    //     return id == rhs.id;
    // };
    ~Satellite(){};
};

#endif