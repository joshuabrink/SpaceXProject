#ifndef STARLINKCOMMUNICATION_H
#define STARLINKCOMMUNICATION_H
#include<iostream>
using namespace std;
/**
 * THE LEDS :
 *  COLLEGUE PARTICIPANT IN THE MEDIATOR
 * 
 *  TODO: Define pure virtual functions that will deal with the colleague communication with its mediator
 */
class CommunicationNetwork;

class StarlinkCommunication
{
private:
    CommunicationNetwork* commuicator;
protected:
    string communicationMedium;
public:
    StarlinkCommunication(/* args */);
    virtual void Communicate(string message,string communication)=0;
    ~StarlinkCommunication();
};




#endif