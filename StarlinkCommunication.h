#ifndef STARLINKCOMMUNICATION_H
#define STARLINKCOMMUNICATION_H
// Collegue AND Node
#include <iostream>
// #include "CommuncationNetwork.h"
class CommuncationNetwork;
static int counter = 0;
class StarlinkCommunication
{
/** @file StarlinkCommunication.h
 *  @class StarlinkCommunication
 *  @headerfile  StarlinkCommunication.h "StarlinkCommunication.h"
 *  @brief StarlinkCommunication is a prototype participant in the Prototype design pattern
 *  @brief StarlinkCommunication is a colleague participant the Mediator design pattern
 *
 *  StarlinkCommunication defines an interface for cloning.
 *  StarlinkCommunication also defines an interface for colleague objects.
 *
 *  @author Tshegofatso Manthata
 *  @author Joshua Brink
 *  @bug No known bugs.
 */

protected:
    const int id;
    CommuncationNetwork *comunicationNetwork;

public:
/** 
 *  @fn     StarlinkCommunication() 
 *  @brief  StarlinkCommunication default constructor
 *		
 */
    StarlinkCommunication() : id(counter++){};
    /** 
 *  @fn     StarlinkCommunication(const int id)
 *  @brief  StarlinkCommunication paramatised constructor which takes in an integer called id.
 * 
 *  @param[in] id, a const integer 
 *		
 */
    StarlinkCommunication(const int id) : id(id){};
       /** 
 *  @fn     StarlinkCommunication(const int id)
 *  @brief  StarlinkCommunication paramatised constructor which takes in a StarlinkCommunication object called node.
 * 
 *  @param[in] node, a StarlinkCommunication pointer
 *		
 */
    StarlinkCommunication(StarlinkCommunication *node) : id(node->id){};


    /** 
 *  @fn     getId()
 *  @brief  It is an id attribute getter function.
 * 
 *  @return id, an integer id.
 *		
 */
    int getId() { return id; };


       /** 
 *  @fn     registerNetwork(CommuncationNetwork *)
 *  @brief  This function registers StarlinkCommunication object with a CommunicationNetwork 
 * 
 *  @param [in] ,CommunicationNetwork object
 *  @return void
 *		
 */
    void registerNetwork(CommuncationNetwork *);


    /** 
 *  @fn     ~StarlinkCommunication() 
 *  @brief  StarlinkCommunication destructor
 *		
 */
    virtual ~StarlinkCommunication(){};

    /** 
 *  @fn     virtual StarlinkCommunication *clone() = 0
 *  @brief  clone() is defined as a pure virtual function that will be 	   
 *		    implemented in the concrete Prototypes participant in the prototype  
 *		    design pattern named,StarlinkOrbitingSatellite and StarlinkGroundUser.
 *
 *  @return StarlinkCommunication* , a StarlinkCommunication pointer
 */
    virtual StarlinkCommunication *clone() = 0;
    /** 
 *  @fn     virtual void communicate(std::string message, int nodeId = -1) = 0
 *  @details communicate() is defined as a pure virtual function that will be
 *		    implemented in the concrete colleague participants in the Mediator
 *		    design pattern named,StarlinkOrbitingSatellite and SatrlinkGrounUser.
 *		    
 *  @param[out] message, a string message
 *  @param[in] nodeId, an integer id
 *  @return void.
 */
    virtual void communicate(std::string message, int nodeId = -1) = 0;
       /** 
 *  @fn     virtual void receivedMessage(std::string message) = 0
 *  @details receivedMessage() is defined as a pure virtual function that will be
 *		    implemented in the concrete colleague participants in the Mediator
 *		    design pattern named,StarlinkOrbitingSatellite and SatrlinkGrounUser.
 *		    
 *  @param[out] message, a string message
 *  @return void.
 */
    virtual void receivedMessage(std::string message) = 0;
    /** 
 *  @fn     virtual bool operator==(const StarlinkCommunication &rhs) const
 *  @details operator==() the overloaded assignment operator is defined as a virtual function, 
 *           it checks whether the given rhs.id is equal to this id.
 *		   
 *		    
 *  @param[in] &rhs ,const StarlinkCommunication 
 *  @return bool.
 */
    
    virtual bool operator==(const StarlinkCommunication &rhs) const
    {
        return id == rhs.id;
    };
};

#include "CommuncationNetwork.h"

void StarlinkCommunication::registerNetwork(CommuncationNetwork *net)
{
    comunicationNetwork = net;
}
// void StarlinkCommunication::receivedMessage(std::string message)
// {
// std::cout << id << " received message: " << message << std::endl;
// }
// void StarlinkCommunication::communicate(std::string message, int id)
// {
//     comunicationNetwork->broadcast(message, id);

// }
#endif