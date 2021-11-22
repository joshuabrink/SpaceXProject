/** @file Build.h
 *  @class Build
 *
 *  @brief Build is a command in the Command design pattern
 *
 *  Build defines a binding between a Receiver object and an action.
 *  Build implements executeBuild() by invoking the corresponding operation(s) on Receiver.
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#ifndef BUILD_H
#define BUILD_H

class Rocket;
#include "Command.h"
#include "RocketFactory.h"

class Build : public Command{
private:
	RocketFactory* myRocketFactory;
	double cost;

public:
/**
 *  @fn     Build(RocketFactory*,double)
 *  @brief  Build constructor 
 *
 *  @param[in] RF, RocketFactory pointer
 *  @param[in] cost, a double value for the cost of a Rocket.
 */
	Build(RocketFactory*,double);

/** 
 *  @fn     Rocket* executeBuild()
 *  @brief  executeBuild() builds a Rocket by calling the RocketFactory
 *
 *  @return Rocket*, a Rocket pointer
 */
	Rocket* executeBuild();

	void execute() {};
	
/** 
 *  @fn     virtual~Earth()
 *  @brief  virtual Earth destructor
 */
	virtual ~Build();
};

#endif
