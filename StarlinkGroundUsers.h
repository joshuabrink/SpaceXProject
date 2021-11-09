#ifndef STARLINKGROUNDUSERS_H
#define STARLINKGROUNDUSERS_H
#include "StarlinkCommunication.h"

/**
 * THE LEDS :
 *  CONCRETE COLLEGUE PARTICIPANT IN THE MEDIATOR
 * 
 *  TODO: Implement the communicate() pure virtual function 
 */
class StarlinkGroundUsers:public StarlinkCommunication
{
private:
    /* data */
public:
    StarlinkGroundUsers(/* args */);
    void Communicate(string message,string communication) override;
    ~StarlinkGroundUsers();
};




#endif