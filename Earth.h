#ifndef EARTH_H
#define EARTH_H

/** @file Earth.h
 *  @class Earth
 *
 *  @brief Earth is a concrete prototype participant in the Prototype design pattern
 *
 *  Earth makes use of the Destinantion interface for cloning.
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#include "Destination.h"

class Earth : public Destination {
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
 *  @fn     ~Earth()
 *  @brief  Earth destructor
 */
	~Earth();
};

#endif
