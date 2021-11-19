#ifndef STARLINKCOMMUNICATION_H
#define STARLINKCOMMUNICATION_H
// Collegue AND Node
#include <iostream>
// #include "CommuncationNetwork.h"
class CommuncationNetwork;
static int counter = 0;
class StarlinkCommunication
{
    /**
     * @author      Tshegofatso Manthata
     * @headerfile  StarlinkCommunication.h "StarlinkCommunication.h"
     * @brief       This is a collegue interface for the Mediator pattern
     * @todo        declares operations to be completed by the concrete classes
     *
     */

protected:
    const int id;
    CommuncationNetwork *comunicationNetwork;

public:
    StarlinkCommunication() : id(counter++){};
    StarlinkCommunication(const int id) : id(id){};
    StarlinkCommunication(StarlinkCommunication *node) : id(node->id){};
    int getId() { return id; };
    void registerNetwork(CommuncationNetwork *);
    virtual ~StarlinkCommunication(){};
    virtual StarlinkCommunication *clone() = 0;
    virtual void communicate(std::string message, int nodeId = -1) = 0;
    virtual void receivedMessage(std::string message) = 0;
    virtual bool operator==(const StarlinkCommunication &rhs) const
    {
        return id == rhs.id;
    };
};

#include "CommuncationNetwork.h"

void StarlinkCommunication::registerNetwork(CommuncationNetwork *net)
{
    comunicationNetwork = net;
}
// void StarlinkCommunication::receivedMessage(std::string message)
// {
// std::cout << id << " received message: " << message << std::endl;
// }
// void StarlinkCommunication::communicate(std::string message, int id)
// {
//     comunicationNetwork->broadcast(message, id);

// }
#endif