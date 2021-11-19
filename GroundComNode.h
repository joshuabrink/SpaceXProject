#ifndef GROUNDCOMNODE_H
#define GROUNDCOMNODE_H
#include <iostream>
// #include <vector>
// using namespace std;
// #include "GroundComNodeIterator.h"
#include "CommuncationNode.h"
#include "CommuncationNetwork.h"
/**
 * THE LEDS :
 *  Prototype participant in the prototype
 *
 *  TODO: define a pure virtual clone()
 */
// class FalconRockets;
// class GroundComNodeIterator;
static int groundComId = 0;
class GroundComNode : public CommuncationNode
{

public:
    GroundComNode() : CommuncationNode(groundComId++)
    {

    };
    GroundComNode(const int id) : CommuncationNode(id){};
    void communicate(std::string message, int id = -1) override
    {
        std::cout << "Ground Control " << this->id << " sent message" << std::endl;
        // if (id == -1)
        // {
        comunicationNetwork->broadcast(message, id);
        // }
    };
    void receivedMessage(std::string message) override
    {
        // std::cout << "GroundComNode ";

        std::cout << "Ground Control " << id << " received message: " << message << std::endl;
        // comunicationNetwork->broadcast(message);
        // std::cout << id << " received message" << message << std::endl;
    };
    // bool launchGroundComNode(FalconRockets *transport){return true;};
    // virtual GroundComNodeIterator *createIterator() = 0;
    // virtual void addList(GroundComNode*)=0;
    CommuncationNode *clone() { return new GroundComNode(this->id); };
    // bool operator==(const CommuncationNode &rhs) const
    // {
    //     return id == rhs.id;
    // };
    ~GroundComNode(){};
};

#endif