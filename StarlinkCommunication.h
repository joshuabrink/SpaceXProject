#ifndef STARLINKCOMMUNICATION_H
#define STARLINKCOMMUNICATION_H
#include<iostream>
using namespace std;
/**
 * @author      Tshegofatso Manthata
 * @headerfile  StarlinkCommunication.h "StarlinkCommunication.h"
 * @brief       This is a collegue interface for the Mediator pattern
 * @todo        declares operations to be completed by the concrete classes
 * 
 */
class CommunicationNetwork;

class StarlinkCommunication
{
private:
    CommunicationNetwork* communicator;
protected:
    string communicationMedium;
public:
    StarlinkCommunication(/* args */);
    /* have a randomizer that will choose which message to display in the communicate function*/
    virtual void Communicate(string message,string communication)=0;
    virtual void ReceivedMessage()=0; 
    void reg(CommunicationNetwork*);
    ~StarlinkCommunication();
};




#endif