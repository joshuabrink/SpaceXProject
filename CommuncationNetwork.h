#ifndef COMMUNCATIONNETWORK_H
#define COMMUNCATIONNETWORK_H
#include "ComNodeQueue.h"
// Mediator
class CommuncationNetwork
{
private:
    ComNodeQueue col;

public:
    CommuncationNetwork(){};
    void notify()
    {
    ComNodeQueueIterator it = col.begin();
        while (!(it == col.end()))
        {
            // CommuncationNode cur = *(*it);
            // cout << (*it).id << endl;

            ++(it);
        }
    }
    ~CommuncationNetwork(){};
};

#endif