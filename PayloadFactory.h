#ifndef PAYLOADFACTORY_H
#define PAYLOADFACTORY_H

/** @file PayloadFactory.h
 *  @class PayloadFactory
 *  @brief PayloadFactory is the creator in the Factory method design pattern 
 *
 *  @author Anru Nel
 *  @bug No known bugs.
 */

#include <iostream>
#include "Payload.h"

using namespace std;

class PayloadFactory
{
public:
/**
*  @fn     PayloadFactory()
*  @brief  constructor
*/
	PayloadFactory();

/**
*  @fn     ~PayloadFactory()
*  @brief  destructor
*/
	~PayloadFactory();
/**
*  @fn     virtual Payload* createPayload(string, double)
*  @brief  createPayload will be implemented in the concretecreator, SuppliesFactory 
*
*  @param[in] string, description
*  @param[in] double, cost
*  @return Payload*, a payload pointer
*/
	virtual Payload* createPayload(string, double) = 0;

};

#endif
