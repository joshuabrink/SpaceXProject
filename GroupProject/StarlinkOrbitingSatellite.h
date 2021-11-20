/** @file StarlinkOrbitingSatellite.h
 *  @class StarlinkOrbitingSatellite
 *  @headerfile  StarlinkOrbitingSatellite.h "StarlinkOrbitingSatellite.h"
 *  @brief StarlinkOrbitingSatellite is a concrete prototype participant in the Prototype design pattern
 *  @brief StarlinkOrbitingSatellite is a concrete colleague participant the Mediator design pattern
 *
 *  StarlinkOrbitingSatellite implements the interface for cloning.
 *  StarlinkOrbitingSatellite also implements the interface for colleague objects.
 *
 *   
 *   @author Tshegofatso Manthata
 *   @author Joshua Brink
 *  @bug No known bugs.
 */
#ifndef STARLINKORBITINGSATELLITE_H
#define STARLINKORBITINGSATELLITE_H
#include <iostream>

#include "StarlinkCommunication.h"
#include "CommuncationNetwork.h"

class FalconRockets;
static int StarlinkOrbitingSatelliteId = 0;
class StarlinkOrbitingSatellite : public StarlinkCommunication
{

private:
    bool isLaunched;

public:
/** 
 *  @fn     StarlinkOrbitingSatellite() 
 *  @brief  StarlinkOrbitingSatellite default constructor
 *		
 */
    StarlinkOrbitingSatellite() : StarlinkCommunication(StarlinkOrbitingSatelliteId++)
    {
        isLaunched = false;
    };
           /** 
 *  @fn     StarlinkOrbitingSatellite(const int id)
 *  @brief  StarlinkOrbitingSatellite paramatised constructor which takes in a const integer called id.
 * 
 *  @param[in] id, a const integer
 *		
 */
    
    StarlinkOrbitingSatellite(const int id) : StarlinkCommunication(id){};

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
        // if (isLaunched)
        // {
            std::cout << "StarlinkOrbitingSatellite " << this->id << " sent message" << std::endl;
            // if (id == -1)
            // {
            comunicationNetwork->broadcast(message, id);
        // }

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
        // std::cout << "StarlinkOrbitingSatellite ";

        std::cout << "StarlinkOrbitingSatellite " << id << " received message: " << message << std::endl;
        // comunicationNetwork->broadcast(message);
        // std::cout << id << " received message" << message << std::endl;
    };
    
    
    // bool launchStarlinkOrbitingSatellite(FalconRockets *transport){return true;};


    /** 
 *  @fn     StarlinkCommunication *clone() 
 *  @brief  clone() creates and returns a new StarlinkOrbitingSatellite object. It is the implementation of the concrete Prototype.
 *
 *  @return StarlinkCommunication* , a StarlinkCommunication pointer to a StarlinkOrbitingSatellite object
 */
    StarlinkCommunication *clone() { return new StarlinkOrbitingSatellite(this->id); };
      /** 
 *  @fn     ~StarlinkOrbitingSatellite() 
 *  @brief  StarlinkOrbitingSatellite destructor
 *		
 */
    ~StarlinkOrbitingSatellite(){};
};

#endif