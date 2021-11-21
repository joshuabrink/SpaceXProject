#ifndef FALCON9_H
#define FALCON9_H

/** @file Falcon9.h
 *  @class Falcon9
 *  @brief Falcon9 is a concrete receiver in the Command design pattern
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#include "Rocket.h"
//#include "SatelliteIterator.h"

using namespace std;

class Falcon9 : public Rocket {
private:
	/*SatelliteCollection* satellites;
	SatelliteIterator* iterate;*/

public:
/** 
 *  @fn     Falcon9(CompositeStage*,double)
 *  @brief  Falcon9 constructor
 */
	Falcon9(CompositeStage*,double);
	Falcon9(double);
	/*void addSatellites(SatelliteCollection*);*/
	void Launch();
	void Interrupt();
	//prototype:
	Rocket* clone();
	
/** 
 *  @fn     ~Falcon9()
 *  @brief  Falcon9 destructor
 */
	~Falcon9(){};
	
};

#endif
