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

StarlinkGroundUsers::StarlinkGroundUsers(/* args */)
{
}
void StarlinkGroundUsers::Communicate(string message,string communication)
{

}
StarlinkGroundUsers::~StarlinkGroundUsers()
{
}


#endif