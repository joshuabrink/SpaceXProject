#ifndef CONCRETESPACECRAFTFACTORY_H
#define CONCRETESPACECRAFTFACTORY_H

/** @file ConcreteSpaceCraftFactory.h
 *  @class DragonFactory
 *  @brief DragonFactory is a concrete factory in the Factory method design pattern
 *
 *	@class CrewDragonFactory
 *	@brief CrewDragonFactory is a concrete factory in the Factory method design pattern
 *
 *  @author Anru Nel
 *  @bug No known bugs.
 */

#include "SpaceCraftFactory.h"
#include <iostream>
using namespace std;

class DragonFactory : public SpaceCraftFactory
{
public:
	/**
*  @fn     ~DragonFactory()
*  @brief  DragonFactory constructor
*/
	DragonFactory();

/**
*  @fn     ~DragonFactory()
*  @brief  DragonFactory destructor
*/
	~DragonFactory();

/**
*  @fn     SpaceCraft* createSpaceCraft(double, int)
*  @brief  create a SpaceCraft with and cost
*
*  @param[in] double, cost
*  @param[in] int, capacity
*  @return SpaceCraft*, a SpaceCraft pointer
*/
	SpaceCraft* createSpaceCraft(double, int);

private:

};


class CrewDragonFactory : public SpaceCraftFactory
{
public:
/**
*  @fn     CrewDragonFactory()
*  @brief  CrewDragonFactory constructor
*/
	CrewDragonFactory();

/**
*  @fn     ~CrewDragonFactory()
*  @brief  CrewDragonFactory destructor
*/
	~CrewDragonFactory();

/**
*  @fn     SpaceCraft* createSpaceCraft(double, int)
*  @brief  create a SpaceCraft with and cost
*
*  @param[in] double, cost
*  @param[in] int, capacity
*  @return SpaceCraft*, a SpaceCraft pointer
*/
	SpaceCraft* createSpaceCraft(double, int);
private:

};

#endif 

