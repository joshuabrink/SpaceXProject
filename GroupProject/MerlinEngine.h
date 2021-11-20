#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include <iostream>
#include "Engine.h"

/** @file MerlinEngine.h
 *  @class MerlinEngine
 *
 *  @brief MerlinEngine is a concrete component in the Decorator design pattern
 *
 *	Anru Nel
 *  @bug No known bugs.
 */

using namespace std;

class MerlinEngine : public Engine
{
public:

/**
 *  @fn     MerlinEngine()
 *  @brief  MerlinEngine constructor
 */

	MerlinEngine();
	MerlinEngine(double);
	MerlinEngine(const MerlinEngine& E);
/**
*	@fn     virtual double totalCost()
*	@brief  totalCost() will be used to determine the total cost of the Merlin engines
*/
	virtual double totalCost();

/**
*	@fn     virtual double addEngine(Engine*)
*	@brief  addEngine(Engine*) will be used to decorate the Engine
*/
	virtual void addEngine(Engine*);


protected:
/**
 *  @fn     ~Satellite()
 *  @brief  Satellite destructor
 */
	~MerlinEngine();

};

#endif
