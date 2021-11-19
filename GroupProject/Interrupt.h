#ifndef INTERRUPT_H
#define INTERRUPT_H

#include "Command.h"
#include "Rocket.h"

/** @file Interrupt.h
 * @class Interrupt
 * @brief Interrupt is a ConcreteCommand participant in the Command design pattern
 * Interrupt defines a binding between a Receiver object and an action.
 * Interrupt implements execute() by invoking the corresponding operation(s) on Receiver.
 * @author Jason Antalis & Joshua Young
 * @bug No known bugs.
*/

class Interrupt :public Command {
private:
	Rocket* myRocket;

public:
    /**
     * @fn     Interrupt(Rocket* R)
     * @brief  A constructor for the Interrupt class which sets the value of myRocket
     * @param[in] Rocket*, Rocket pointer
    */
	Interrupt(Rocket* R);
	/**
     * @fn     virtual void execute()
     * @brief  This function will interrupt the rocket
     * @return void.
    */
	virtual void execute();
	/**
     * @fn     virtual ~Interrupt()
     * @brief  A destructor for the Interrupt class
    */
    virtual ~Interrupt();
};

#endif
