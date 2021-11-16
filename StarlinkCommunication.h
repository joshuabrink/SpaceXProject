#ifndef STARLINKCOMMUNICATION_H
#define STARLINKCOMMUNICATION_H
#include<iostream>
using namespace std;
/**
 * @author Tshegofatso Manthata
 * @todo declare 
 * 
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