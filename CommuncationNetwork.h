#ifndef COMMUNCATIONNETWORK_H
#define COMMUNCATIONNETWORK_H
// #include "ComNodeCollection.h"
class ComNodeCollection;
// Mediator
class CommuncationNetwork
{
private:
    ComNodeCollection *comunicationCollection;

public:
    CommuncationNetwork() : comunicationCollection(0){};
    CommuncationNetwork(ComNodeCollection *);
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
#include "ComNodeCollection.h"

CommuncationNetwork::CommuncationNetwork(ComNodeCollection *col)
{
    comunicationCollection = col;
    ComNodeCollection::iterator it = col->begin();

    while (!(it == col->end()))
    {
        (*it)->registerNetwork(this);

        ++(it);
    }
    (*it)->registerNetwork(this);
}
void CommuncationNetwork::broadcast(std::string msg, int id)
{
    ComNodeCollection::iterator it = comunicationCollection->begin();
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

#endif