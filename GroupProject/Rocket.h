#ifndef ROCKET_H
#define ROCKET_H

#include <string>
#include <iostream>
#include "Destination.h"
#include "CompositeStage.h"
//#include "SatelliteCollection.h"
//#include "SatelliteVector.h"
//class SatelliteCollection;
using namespace std;

class Rocket {
private:
	Destination* destination;
	CompositeStage* stage;
	bool isLaunch;
	double cost;
public:
	/**
	 *  @fn     Rocket(CompositeStage*,double)
	 *  @brief  Rocket constructor
	 *
	 *  @param[in] stage, CompositeStage pointer
	 *  @param[in] cost, a double value for the cost of a Rocket.
	 */
	Rocket(CompositeStage*, double);
	 
	void addStage(CompositeStage*);

	Rocket(double);
	/**
	 *  @fn     virtual void Launch()=0
	 *  @brief  Launch acts as the receiver for the launch command and the child class responds accordingly.
	 *	@rerturn void
	 */
	virtual void Launch() = 0;
	/**
	 *  @fn     virtual void Interrupt()
	 *  @brief  Interrupt acts as the receiver for the Interrupt command and responds accordingly.
	 *	@rerturn void
	 */
	virtual void Interrupt() = 0;
	/**
	 *  @fn     virtual void NextStage()
	 *  @brief  NextStage acts as the receiver for the NextStage command and the child class responds accordingly.
	 *	@rerturn void
	 */
	virtual void NextStage();
	/**
	 *  @fn     virtual void setDestination(Destination* d)
	 *  @brief  setDestination acs as the receiver in the command design pattern
	 *			and sets the destination of the Rocket.
	 *
	 *  @param[in] d, a Destination pointer.
	 *  @return void
	 */
	virtual void setDestination(Destination* d);
	/**
	 *  @fn     Destination* getDestination()
	 *  @brief  getDestination returns the Destination of the Rocket.
	 *
	 *  @return Destination, a Destination pointer.
	 */
	Destination* getDestination();
	/**
	 *  @fn     CompositeStage* getStage()
	 *  @brief  getStage returns the Stages of the Rocket
	 *
	 *  @return ComopositeStage*, a pointer of CompositeStage
	 */
	CompositeStage* getStage();
	/**
	 *  @fn     void setStage(CompositeStage*)
	 *  @brief  setStage sets the Stages of the Rocket.
	 *
	 *  @param[in] CompositeStage*, a CompositeStage pointer.
	 *  @return void
	 */
	void setStage(CompositeStage*);
	/**
	 *  @fn     bool getLaunch()
	 *  @brief  getLaunch gets the launch state from the Rocket.
	 *
	 *  @return bool , boolean refelcting the launch state.
	 */
	bool getLaunch();
	/**
	 *  @fn     double getCost()
	 *  @brief  getCost returns the Cost of the Rocket.
	 *
	 *  @return double, cost of Rocket.
	 */
	double getCost();
	/**
	 *  @fn     void setCost(double)
	 *  @brief  setCost sets the Cost of the Rocket.
	 *
	 *  @param[in] cost, a double value for the Cost of a Rocket.
	 *  @return void
	 */
	void setCost(double);
	/**
	 *  @fn     virtual void addSatellites(Satellite*)
	 *  @brief  addSatellites is a virtual function that gets overridden in the Falcon9 child class
	 *			such that satallites can be added to the Rocket.
	 *
	 *  @param[in] Satellite, a Satellite pointer.
	 *  @return void
	 */
	/*virtual void addSatellites(SatelliteCollection*) {};*/

	/**
	 *  @fn     void setLaunch(bool)
	 *  @brief  setLaunch changes the state of the Launch in Rocket.
	 *
	 *  @param[in] launch, a boolean value for the Launch state.
	 *  @return void
	 */
	void setLaunch(bool);

	//prototype:
/**
 *  @fn     virtual Rocket* clone()=0
 *  @brief  clone returns a copy of the current state of the Rocket class.
 *
 *  @return Rocket*, Rocket pointer.
 */
	virtual Rocket* clone() = 0;
};

#endif
