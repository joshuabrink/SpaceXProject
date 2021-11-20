/** @file Launch.h
 * @class Launch
 * @brief Launch is a ConcreteCommand participant in the Command design pattern
 * Launch defines a binding between a Receiver object and an action.
 * Launch implements execute() by invoking the corresponding operation(s) on Receiver.
 * @author Jason Antalis & Joshua Young
 * @bug No known bugs.
 */

#ifndef BUILD_H
#define BUILD_H

#include "Command.h"
#include "RocketFactory.h"

class Build:public Command{
private:
	RocketFactory* myRocketFactory;

public:
	Build(RocketFactory*);
	Rocket* execute();
};

#endif
