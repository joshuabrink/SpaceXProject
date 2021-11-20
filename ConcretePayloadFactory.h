#ifndef CONCRETEPAYLOADFACTORY_H
#define CONCRETEPAYLOADFACTORY_H

/** @file ConcretePayloadFactory.h
 *  @class SuppliesFactory
 *  @brief SuppliesFactory is a concrete factory in the Factory method design pattern
 * 
 *	@class SatellitesFactory
 *	@brief SatellitesFactory is a concrete factory in the Factory method design pattern
 *  
 *  @author Anru Nel
 *  @bug No known bugs.
 */

#include "PayloadFactory.h"
#include <iostream>
using namespace std;

class SuppliesFactory : public PayloadFactory
{
public:
/**
 *  @fn     SuppliesFactory()
 *  @brief  SuppliesFactory constructor
 */
	SuppliesFactory();

/**
*  @fn     ~SuppliesFactory()
*  @brief  SuppliesFactory destructor
*/
	~SuppliesFactory();

/**
*  @fn     Payload* createPayload(string, double)
*  @brief  create a payload with a description and cost
*
*  @param[in] string, description
*  @param[in] double, cost
*  @return Payload, a payload pointer
*/
	Payload* createPayload(string, double);
private:

};


class SatellitesFactory : public PayloadFactory
{
public:

/**
*  @fn     SatellitesFactory()
*  @brief  SatellitesFactory constructor
*/
	SatellitesFactory();

/**
*  @fn     ~SatellitesFactory()
*  @brief  SatellitesFactory destructor
*/
	~SatellitesFactory();

/**
*  @fn     Payload* createPayload(string, double)
*  @brief  create a payload with a description and cost
*
*  @param[in] string description
*  @param[in] double cost
*  @return Payload, a payload pointer
*/
	Payload* createPayload(string,double);

private:

};


#endif 

