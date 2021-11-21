#ifndef ENGINE_H
#define ENGINE_H

/** @file Engine.h
 *  @class Engine
 *  @brief Engine is a component in the decorator design pattern and also the product participant in the builder design pattern
 *
 *  @author Anru Nel
 *  @bug No known bugs.
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Engine
{
public:
	/**
*  @fn     Engine()
*  @brief  constructor
*/
	Engine();
	/**
	*	@fn  Engine(double)
	*	@brief  constructor initialising cost
	*
	*	@param[in] double, cost
	*/
	Engine(double);

	/**
	*  @fn     virtual ~Engine()
	*  @brief  virtual Engine destructor
	*/
	virtual ~Engine();

	/**
	*	@fn  virtual double totalCost() = 0;
	*	@brief  constructor initialising cost
	*
	*	@return double
	*/
	//virtual double totalCost() = 0;
	//virtual void addEngine(Engine*) = 0;

/**
*	@fn  string getName();
*	@brief  return the name
*
*	@return string
*/
	string getName();

	/**
	*	@fn  double getCost();
	*	@brief  return the cost
	*
	*	@return double
	*/
	double getCost();

protected:
	string name;
	double cost;
};

#endif