#ifndef LOWORBIT_H
#define LOWORBIT_H

/** @file LowOrbit.h
 *  @class LowOrbit
 *
 *  @brief LowOrbit is a concrete prototype participant in the Prototype design pattern
 *
 *  LowOrbit makes use of the Destinantion interface for cloning.
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */
#include "Destination.h"

class LowOrbit : public Destination{
public:
	
/** 
 *  @fn     string getDestination();
 *  @brief  return the destination
 *
 *  @return string
 */
	string getDestination();
	
/** 
 *  @fn     Destination *clone()
 *  @brief  clone()
 *
 *  @return Destination*, a Destination pointer
 */
	Destination* clone();
	
/** 
 *  @fn     ~LowOrbit()
 *  @brief  LowOrbit destructor
 *
 */
	~LowOrbit();
};

#endif
