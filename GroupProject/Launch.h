#ifndef LAUNCH_H
#define LAUNCH_H

#include "Command.h"
#include "Rocket.h"

/** @file Launch.h
 * @class Launch
 * @brief Launch is a ConcreteCommand participant in the Command design pattern
 * Launch defines a binding between a Receiver object and an action.
 * Launch implements execute() by invoking the corresponding operation(s) on Receiver.
 * @author Jason Antalis & Joshua Young
 * @bug No known bugs.
*/

class Launch :public Command {
private:
	Rocket* myRocket;

public:
    /**
     * @fn     Launch(Rocket* R)
     * @brief  A constructor for the Launch class which sets the value of myRocket
     * @param[in] Rocket*, Rocket pointer
    */
	Launch(Rocket* R);
	/**
     * @fn     virtual void execute()
     * @brief  This function will launch the rocket
     * @return void.
    */
	virtual void execute();
	/**
     * @fn     virtual ~Launch()
     * @brief  A destructor for the Launch class
    */
    virtual ~Launch();
};

#endif