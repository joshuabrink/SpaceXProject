#ifndef CONCRETEROCKETFACTORY_H
#define CONCRETEROCKETFACTORY_H

/** @file ConcreteRocketFactory.h
 *  @class FalconHeavyFactory
 *  @brief FalconHeavyFactory is a concrete factory in the Factory method design pattern
 *
 *	@class Falcon9Factory
 *	@brief Falcon9Factory is a concrete factory in the Factory method design pattern
 *
 *  @author Anru Nel
 *  @bug No known bugs.
 */

#include <iostream>
#include "RocketFactory.h"
#include "Falcon9.h"
#include "FalconHeavy.h"

using namespace std;

class Falcon9Factory : public RocketFactory
{
public:
	/**
 *  @fn     Falcon9Factory()
 *  @brief  Falcon9Factory constructor
 */
	Falcon9Factory();

	/**
 *  @fn     ~Falcon9Factory()
 *  @brief  Falcon9Factory destructor
 */
	~Falcon9Factory();

	/**
	*  @fn     Payload* createPayload(string, double)
	*  @brief  create a payload with and cost
	*
	*  @param[in] double cost
	*  @return Rocket*, a payload pointer
	*/
	Rocket* createRocket(double);

private:

};

class FalconHeavyFactory : public RocketFactory
{
public:
/**
 *  @fn     FalconHeavyFactory()
 *  @brief  FalconHeavyFactory constructor
 */
	FalconHeavyFactory();

/**
 *  @fn     ~FalconHeavyFactory()
 *  @brief  FalconHeavyFactory destructor
 */
	~FalconHeavyFactory();

/**
*  @fn     Payload* createPayload(string, double)
*  @brief  create a payload with and cost
*
*  @param[in] double cost
*  @return Rocket*, a payload pointer
*/
	Rocket* createRocket(double);
private:

};


#endif 
