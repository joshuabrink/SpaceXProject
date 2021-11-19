#ifndef SETDESTINATION_H
#define SETDESTINATION_H

#include "Command.h"
#include "Rocket.h"
#include "Destination.h"

/** @file SetDestination.h
 * @class SetDestination
 * @brief SetDestination is a ConcreteCommand participant in the Command design pattern
 * SetDestination defines a binding between a Receiver object and an action.
 * SetDestination implements execute() by invoking the corresponding operation(s) on Receiver.
 * @author Jason Antalis & Joshua Young
 * @bug No known bugs.
*/

class SetDestination :public Command {
private:
	Rocket* myRocket;
	Destination* destination;

public:
    /**
     * @fn     SetDestination(Rocket* R, Destination* d)
     * @brief  A constructor for the Build class which sets the value of myRocketFactory
     * @param[in] Rocket*, RocketFactory pointer
     * @param[in] Destination*, Destination pointer
    */
    SetDestination(Rocket* R, Destination* d);
    /**
     * @fn     virtual void execute()
     * @brief  This function will set the the destination variable in the Rocket object pointer
     * @return void.
    */
	virtual void execute();
	/**
     * @fn     virtual ~SetDestination()
     * @brief  A destructor for the SetDestination class
    */
    virtual ~SetDestination();
};

#endif
