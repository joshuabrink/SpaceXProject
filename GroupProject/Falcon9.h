#ifndef FALCON9_H
#define FALCON9_H

/** @file ConcreteSpaceCraftFactory.h
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
	list<Satelllite*> satelllites;
public:
	Falcon9(CompositeStage*,double);
	void addSatelllites(Satelllite*);
	//prototype:
	Rocket* clone();
};

#endif
