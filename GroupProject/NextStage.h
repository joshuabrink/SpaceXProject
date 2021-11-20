#ifndef NEXTSTAGE_H
#define NEXTSTAGE_H

#include "Command.h"
#include "Rocket.h"

/** @file NextStage.h
 * @class NextStage
 * @brief NextStage is a ConcreteCommand participant in the Command design pattern
 * NextStage defines a binding between a Receiver object and an action.
 * NextStage implements execute() by invoking the corresponding operation(s) on Receiver.
 * @author Jason Antalis & Joshua Young
 * @bug No known bugs.
*/

class NextStage :public Command {
private:
	Rocket* myRocket;

public:
    /**
     * @fn     NextStage(Rocket* R)
     * @brief  A constructor for the NextStage class which sets the value of myRocket
     * @param[in] Rocket*, Rocket pointer
    */
	NextStage(Rocket* R);
	/**
     * @fn     virtual void execute()
     * @brief  This function will set the Rocket pointer to its next variable if it has one
     * @return void.
    */
	virtual void execute();
	/**
     * @fn     virtual ~NextStage()
     * @brief  A destructor for the NextStage class
    */
    virtual ~NextStage();
};

#endif
