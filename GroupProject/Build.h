/** @file Build.h
 *  @class Build
 *
 *  @brief Build is a command in the Command design pattern
 *
 *  Build defines a binding between a Receiver object and an action.
 *	Build implements executeBuild() by invoking the corresponding operation(s) on Receiver.
 *
 *  @author Joshau Young
 *  @bug No known bugs.
 */

#ifndef BUILD_H
#define BUILD_H

class Rocket;
#include "Command.h"
#include "RocketFactory.h"

class Build:public Command{
private:
	RocketFactory* myRocketFactory;
	double cost;

public:
	Build(RocketFactory*,double);
	Rocket* executeBuild();
	virtual ~Build();
};

#endif
