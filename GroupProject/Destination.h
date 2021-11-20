#ifndef DESTINATION_H
#define DESTINATION_H

/** @file Destination.h
 *  @class Destination
 *
 *  @brief Destination is the Prototype participant in the Prototype design pattern
 *
 *  Destination defines an interface for cloning
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#include <string>
using namespace std;

class Destination {
public:
/** 
 *  @fn     Destination()
 *  @brief  Destination constructor
 *
 */
	Destination() {};
/** 
 *  @fn     virtual Destination *clone() = 0
 *  @brief  clone() is defined as pure virtual function that will be     
 *  implemented in the concrete Prototypes participant in the prototype  
 *  design pattern named: LowOrbit, ISS, Earth
 *
 *  @return Destination*, a Destination pointer
 */
	virtual Destination* clone() = 0;
	
/** 
 *  @fn     virtual string getDestination = 0
 *  @brief  clone() is defined as pure virtual function that will be implemented in the concrete prototypes
 *
 *  @return Destination*, a Destination pointer
 */
	virtual string getDestination() = 0;
	
/** 
 *  @fn    virtual ~Destination()
 *  @brief  Destination destructor
 *
 */
	virtual ~Destination() {};
};

#endif
