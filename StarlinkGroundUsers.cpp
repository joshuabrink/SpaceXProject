#include "StarlinkGroundUsers.h"
/**
 * @author      Tshegofatso Manthata
 * @class       StarlinkGroundUsers
 */
StarlinkGroundUsers::StarlinkGroundUsers(/* args */)
{
}

/**
 * @fn          void StarlinkGroundUsers::Communicate(string message,string communication)
 * @brief       This is the Communicate() function
 * @todo        Output the message 
 * @param[out] message //string message that is going to be displayed
 * @param[in] communication // a string communication to show what kind of device is being communicated with 
 * @return      void 
 */
void StarlinkGroundUsers::Communicate(string message,string communication)
{
    cout<<"Ground user is communicating with a Satellite: "<< message<<endl;
}
void StarlinkGroundUsers::ReceivedMessage()
{
    cout<<"Ground user received the message"<<endl;
}
StarlinkGroundUsers::~StarlinkGroundUsers()
{
}