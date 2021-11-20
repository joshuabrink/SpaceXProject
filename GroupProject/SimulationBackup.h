/** @file SimulationBackup.h
 *  @class SimulationBakcup
 *
 *  @brief SimulationBackup is the Memento participant in the Memento design pattern
 *
 *  SimulationBackup defines an interface for storing and restoring Simulation objects.
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#ifndef SIMULATIONBACKUP_H
#define SIMULATIONBACKUP_H

#include "Destination.h"
#include "Rocket.h"

class SimulationBackup {
private:
	friend class Simulation;
	Rocket* myRocket;
	double price;

/**
 *  @fn     SimulationBackup(Rocket*,double)
 *  @brief  SimulationBackup is a constructor for the SimulatoinBackup class.
 *
 *	@param[in] rocket, a Rocket pointer
 *  @param[in] price, The price of a rocket
 */
	SimulationBackup(Rocket*,double);

public:
/**
*  @fn     ~SimulationBackup()
*  @brief  SimulationBackup destructor
*
*/
	virtual ~SimulationBackup();

	
};


#endif
