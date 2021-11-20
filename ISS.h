#ifndef ISS_H
#define ISS_H

/** @file ISS.h
 *  @class ISS
 *
 *  @brief ISS is a concrete prototype participant in the Prototype design pattern
 *
 *  ISS makes use of the Destinantion interface for cloning.
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#include "Destination.h"

class ISS : public Destination {
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
 *  @fn     ~ISS()
 *  @brief  ISS destructor
 */
	~ISS();
};

#endif
