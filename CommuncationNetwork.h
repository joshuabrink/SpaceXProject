#ifndef COMMUNCATIONNETWORK_H
#define COMMUNCATIONNETWORK_H
#include <iostream>
// #include "StarlinkCollection.h"
class StarlinkCollection;
// Mediator
class CommuncationNetwork
{
private:
    StarlinkCollection *comunicationCollection;

public:
    CommuncationNetwork() : comunicationCollection(0){};
    CommuncationNetwork(StarlinkCollection *);
    void addStarlinkCollection(StarlinkCollection *);
    /**
     * @fn          broadcast(string msg)
     * @brief       This sends a message to all collegues
     * @return      void
     */
    void broadcast(std::string msg, int id = -1);
    // virtual Satellite *clone() = 0;
    // virtual SatelliteIterator *createIterator() = 0;
    // virtual void addList(Satellite *) = 0;
    ~CommuncationNetwork(){};
};
#include "StarlinkCollection.h"

CommuncationNetwork::CommuncationNetwork(StarlinkCollection *col)
{
    comunicationCollection = col;
    StarlinkCollection::iterator it = col->begin();

    if (!comunicationCollection->isEmpty())
    {
        while (!(it == col->end()))
        {
            (*it)->registerNetwork(this);

     ++(it);
        }
        (*it)->registerNetwork(this);
    }
}
void CommuncationNetwork::addStarlinkCollection(StarlinkCollection *col)
{
    StarlinkCollection::iterator it = col->begin();

    if (!col->isEmpty())
    {
        while (!(it == col->end()))
        {
            (*it)->registerNetwork(this);
            comunicationCollection->add(*it);
            ++(it);
        }
        (*it)->registerNetwork(this);
    }
}

void CommuncationNetwork::broadcast(std::string msg, int id)
{
    StarlinkCollection::iterator it = comunicationCollection->begin();
    if (!comunicationCollection->isEmpty())
    {
        while (!(it == comunicationCollection->end()))
        {
            if (id == -1)
            {
                (*it)->receivedMessage(msg);
            }
            else if ((*it)->getId() == id)
            {
                (*it)->receivedMessage(msg);
                return;
            }

            ++(it);
        }
        (*it)->receivedMessage(msg);
    }
}

#endif