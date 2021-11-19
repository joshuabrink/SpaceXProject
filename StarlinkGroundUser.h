#ifndef STARLINKGROUNDUSER_H
#define STARLINKGROUNDUSER_H
#include <iostream>
#include "StarlinkCommunication.h"
#include "CommuncationNetwork.h"
/**
 * THE LEDS :
 *  Prototype participant in the prototype
 *
 *  TODO: define a pure virtual clone()
 */
// class FalconRockets;
// class StarlinkGroundUsersIterator;
static int groundComId = 0;
class StarlinkGroundUser : public StarlinkCommunication
{
    /**
     * @author      Tshegofatso Manthata
     * @headerfile  StarlinkGroundUsers.h "StarlinkGroundUsers.h"
     * @brief       This is a concrete collegue for the Mediator pattern
     * @todo        Implements the StarlinkCommunication
     *
     */
public:
    StarlinkGroundUser() : StarlinkCommunication(groundComId++){

                           };
    StarlinkGroundUser(const int id) : StarlinkCommunication(id){};
    /**
     * @fn          void StarlinkGroundUsers::Communicate(string message,string communication)
     * @brief       This is the Communicate() function
     * @todo        Output the message
     * @param[out] message //string message that is going to be displayed
     * @param[in] communication // a string communication to show what kind of device is being communicated with
     * @return      void
     */
    void communicate(std::string message, int id = -1) override
    {
        std::cout << "Ground Control " << this->id << " sent message" << std::endl;
        // if (id == -1)
        // {
        comunicationNetwork->broadcast(message, id);
        // }
    };
    void receivedMessage(std::string message) override
    {
        // std::cout << "StarlinkGroundUsers ";

        std::cout << "Ground Control " << id << " received message: " << message << std::endl;
        // comunicationNetwork->broadcast(message);
        // std::cout << id << " received message" << message << std::endl;
    };
    // bool launchStarlinkGroundUsers(FalconRockets *transport){return true;};
    // virtual StarlinkGroundUsersIterator *createIterator() = 0;
    // virtual void addList(StarlinkGroundUsers*)=0;
    StarlinkCommunication *clone() { return new StarlinkGroundUser(this->id); };
    // bool operator==(const StarlinkCommunication &rhs) const
    // {
    //     return id == rhs.id;
    // };
    ~StarlinkGroundUser(){};
};

#endif