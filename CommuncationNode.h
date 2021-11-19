#ifndef COMMUNCATIONNODE_H
#define COMMUNCATIONNODE_H
// Collegue AND Node
#include <iostream>
// #include "CommuncationNetwork.h"
class CommuncationNetwork;
static int counter = 0;
class CommuncationNode
{

protected:
    const int id;
    CommuncationNetwork *comunicationNetwork;

public:
    CommuncationNode() : id(counter++){};
    CommuncationNode(const int id) : id(id){};
    CommuncationNode(CommuncationNode *node) : id(node->id){};
    int getId() { return id; };
    void registerNetwork(CommuncationNetwork *);
    virtual ~CommuncationNode(){};
    virtual CommuncationNode *clone() = 0;
    virtual void communicate(std::string message, int nodeId = -1) = 0;
    virtual void receivedMessage(std::string message) = 0;
    virtual bool operator==(const CommuncationNode &rhs) const
    {
        return id == rhs.id;
    };
};

#include "CommuncationNetwork.h"

void CommuncationNode::registerNetwork(CommuncationNetwork *net)
{
    comunicationNetwork = net;
}
// void CommuncationNode::receivedMessage(std::string message)
// {
// std::cout << id << " received message: " << message << std::endl;
// }
// void CommuncationNode::communicate(std::string message, int id)
// {
//     comunicationNetwork->broadcast(message, id);

// }
#endif