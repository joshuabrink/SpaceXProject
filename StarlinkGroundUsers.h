#ifndef STARLINKGROUNDUSERS_H
#define STARLINKGROUNDUSERS_H
#include "StarlinkCommunication.h"

/**
 * @author      Tshegofatso Manthata
 * @headerfile  StarlinkGroundUsers.h "StarlinkGroundUsers.h"
 * @brief       This is a concrete collegue for the Mediator pattern
 * @todo        Implements the StarlinkCommunication
 * 
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