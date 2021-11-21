#ifndef ROCKETFACTORY_H
#define  ROCKETFACTORY_H

/** @file PayloadFactory.h
 *  @class RocketFactory
 *  @brief RocketFactory is the creator in the Factory method design pattern
 *
 *  @author Anru Nel
 *  @bug No known bugs.
 */

#include <iostream>
#include "Rocket.h"

using namespace std;

class RocketFactory
{
public:

/**
*  @fn     RocketFactory()
*  @brief  constructor
*/
	RocketFactory();

/**
*  @fn     ~RocketFactory()
*  @brief  destructor
*/
	~RocketFactory();

/**
*  @fn     virtual Rocket* createRocket( double)
*  @brief  createRocket will be implemented in the concretecreators: Falcon9FactoryFalconHeavyFactory
*
*  @param[in] double, cost
*  @return Rocket*, a Rocket pointer
*/
	virtual Rocket* createRocket(double) = 0;

private:

};

#endif 

