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
#include "Rocket.h"
#include <list>

using namespace std;

class Falcon9 : public Rocket {
private:
	list<Satellite*> satellites;
public:
/** 
 *  @fn     Falcon9(CompositeStage*,double)
 *  @brief  Falcon9 constructor
 */
	Falcon9(CompositeStage*,double);
	
/** 
 *  @fn     addSatellites()
 *  @brief  addSatellites() 
 *
 *  @param[in] Satellite*, a Satellite pointer
 *  @return void
 */
	void addSatellites(Satellite*);
	
/** 
 *  @fn     Rocket* clone()
 *  @brief  clone() acts as a prototype in the receiver class
 *
 *  @return Rocket*, a pointer to Rocket
 */
	Rocket* clone();
	
/** 
 *  @fn     ~Falcon9()
 *  @brief  Falcon9 destructor
 */
	~Falcon9(){};
	
};

#endif
