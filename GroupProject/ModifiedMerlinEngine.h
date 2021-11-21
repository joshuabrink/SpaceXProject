#ifndef MODIFIEDMERLINENGINE_H
#define MODIFIEDMERLINENGINE_H

/** @file ModifiedMerlinEngine.h
 *  @class ModifiedMerlinEngine
 *
 *  @brief ModifiedMerlinEngine is the Decorator in the Decorator design pattern
 *
 *	Anru Nel
 *  @bug No known bugs.
 */

#include <iostream>
#include "Engine.h"

using namespace std;

class ModifiedMerlinEngine : public Engine
{
public:
	/**
	 *  @fn     ModifiedMerlinEngine()
	 *  @brief  ModifiedMerlinEngine constructor
	 */
	ModifiedMerlinEngine();

	/**
	 *  @fn     ModifiedMerlinEngine()
	 *  @brief  ModifiedMerlinEngine constructor
	 *
	 * 	@param [in] double, cost of the engine
	 */
	ModifiedMerlinEngine(double);

	/**
	 *  @fn     ModifiedMerlinEngine(const MerlinEngine& E)
	 *  @brief  ModifiedMerlinEngine copy constructor
	 *
	 * 	@param [in]  ModifiedMerlinEngine&,  a Merlin Engine
	 */
	ModifiedMerlinEngine(const ModifiedMerlinEngine& E);

	/**
	 *  @fn     ModifiedMerlinEngine()
	 *  @brief  ModifiedMerlinEngine destructor
	 */
	~ModifiedMerlinEngine();

	/**
	*	@fn  virtual double totalCost() = 0;
	*	@brief  constructor initialising cost
	*
	*	@return double
	*/
	virtual double totalCost();

	/**
	*	@fn  virtual double totalCost() = 0;
	*	@brief  constructor initialising cost
	*
	* 	@param [in]  Engine*,  a Engine pointer
	*	@return void
	*/
	virtual void addEngine(Engine*);

private:
	Engine* engines;
};

#endif
