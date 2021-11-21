#ifndef MERLINENGINE_H
#define MERLINENGINE_H

/** @file MerlinEngine.h
 *  @class MerlinEngine
 *
 *  @brief MerlinEngine is a concrete component in the Decorator design pattern
 *
 *	Anru Nel
 *  @bug No known bugs.
 */

#include <iostream>
#include "Engine.h"

using namespace std;

class MerlinEngine : public Engine
{
public:

	/**
	 *  @fn     MerlinEngine()
	 *  @brief  MerlinEngine constructor
	 */
	MerlinEngine();

	/**
	 *  @fn     MerlinEngine(double)
	 *  @brief  MerlinEngine constructor
	 *
	 * 	@param [in] double, cost of the engine
	 */
	MerlinEngine(double);

	/**
	 *  @fn     MerlinEngine(const MerlinEngine& E)
	 *  @brief  MerlinEngine copy constructor
	 *
	 * 	@param [in]  MerlinEngine&,  a Merlin Engine
	 */
	MerlinEngine(const MerlinEngine& E);
	/**
	*	@fn     virtual double totalCost()
	*	@brief  totalCost() will be used to determine the total cost of the Merlin engines
	*/
	virtual double totalCost();

	/**
	*	@fn     virtual double addEngine(Engine*)
	*	@brief  addEngine(Engine*) will be used to decorate the Engine
	*
	*	@param [in] Engine*, a pointer to Engine
	*/
	virtual void addEngine(Engine*);


protected:
	/**
	 *  @fn     ~MerlinEngine()
	 *  @brief  MerlinEngine destructor
	 */
	~MerlinEngine();

};

#endif
