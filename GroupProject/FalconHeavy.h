#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

/** @file FalconHeavy.h
 *  @class FalconHeavy
 *  @brief FalconHeavy is a concrete receiver in the Command design pattern
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#include "Rocket.h"

using namespace std;

class FalconHeavy: public Rocket {
public:

/** 
 *  @fn     FalconHeavy(CompositeStage*,double)
 *  @brief  FalconHeavy constructor
 */
	FalconHeavy(CompositeStage*,double);
	
/** 
 *  @fn     Rocket* clone()
 *  @brief  clone() acts as a prototype in the receiver class
 *
 *  @return Rocket*, a pointer to Rocket
 */
	Rocket* clone();

	void Launch();
	void Interrupt();

/** 
 *  @fn     ~FalconHeavy()
 *  @brief  FalconHeavy destructor
 */
	~FalconHeavy(){};

};

#endif
