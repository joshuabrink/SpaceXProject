
/** @file StarlinkGroundUser.h
 *  @class StarlinkGroundUser
 *  @headerfile  StarlinkGroundUser.h "StarlinkGroundUser.h"
 *  @brief StarlinkGroundUser is a concrete prototype participant in the Prototype design pattern
 *  @brief StarlinkGroundUser is a concrete colleague participant the Mediator design pattern
 *
 *  StarlinkGroundUser implements the interface for cloning.
 *  StarlinkGroundUser also implements the interface for colleague objects.
 *
 *   @author Joshua Brink
 *   @author Tshegofatso Manthata
 * 
 *  @bug No known bugs.
 */
#ifndef STARLINKGROUNDUSER_H
#define STARLINKGROUNDUSER_H
#include <iostream>
#include "StarlinkCommunication.h"
#include "CommuncationNetwork.h"

static int groundComId = 0;
class StarlinkGroundUser : public StarlinkCommunication
{
 
public:
/** 
 *  @fn     StarlinkGroundUser() 
 *  @brief  StarlinkGroundUser default constructor
 *		
 */
    StarlinkGroundUser() : StarlinkCommunication(groundComId++){};
       /** 
 *  @fn     StarlinkGroundUser(const int id)
 *  @brief  StarlinkGroundUser paramatised constructor which takes in a const integer called id.
 * 
 *  @param[in] id, a const integer
 *		
 */
    
    StarlinkGroundUser(const int id) : StarlinkCommunication(id){};
  
     /** 
 *  @fn     void communicate(std::string message, int nodeId = -1) 
 *  @details communicate() sends the message to the concrete colleague with the id being passed through
 *           It outputs the message
 *		    
 *  @param[out] message, a string message
 *  @param[in] id, an integer id
 *  @return void.
 */
    void communicate(std::string message, int id = -1) override
    {
        std::cout << "Ground Control " << this->id << " sent message" << std::endl;
        // if (id == -1)
        // {
        comunicationNetwork->broadcast(message, id);
        // }
    };
    /** 
 *  @fn     void receivedMessage(std::string message)
 *  @details receivedMessage() outputs that it has indeed received the communicated message
 *		    
 *  @param[out] message, a string message
 *  @return void.
 */
    void receivedMessage(std::string message) override
    {
        // std::cout << "StarlinkGroundUsers ";

        std::cout << "Ground Control " << id << " received message: " << message << std::endl;
        // comunicationNetwork->broadcast(message);
        // std::cout << id << " received message" << message << std::endl;
    };
    /** 
 *  @fn     StarlinkCommunication *clone() 
 *  @brief  clone() creates and returns a new StarlinkGroundUser object. It is the implementation of the concrete Prototype.
 *
 *  @return StarlinkCommunication* , a StarlinkCommunication pointer to a StarlinkGroundUser object
 */
    
    StarlinkCommunication *clone() { return new StarlinkGroundUser(this->id); };
    /** 
 *  @fn     ~StarlinkGroundUser() 
 *  @brief  StarlinkGroundUser destructor
 *		
 */
    ~StarlinkGroundUser(){};
};

#endif