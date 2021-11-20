/** @file Simulation.h
 * @class Simulation
 * @brief Simulation is the originator in the Memento pattern.
 * @brief Simulation is the Invoker in the Command pattern.
 * 
 * Simulation defines an interface for storing and restoring Simulation objects and an interface for 
 * sending commands to be executed by specific receivers.
 * 
 * @author Joshua Young
 * @bug No known bugs.
 */

#ifndef SIMULATION_H
#define SIMULATION_H

#include "SimulationBackup.h"
#include "Command.h"
#include "Rocket.h"
#include "Destination.h"

class Simulation {
private:
	Command* buildCommand;
	Command* setDestinationCommand;
	Command* launchCommand;
	Command* interruptCommand;
	Command* nextStageCommand;
	
	Rocket* rocket;
	double price;


public:
/**
 *  @fn     Simulation(Rocket*)
 *  @brief  Simulation Constructor
 *
 *  @param[in] r, a Rocket pointer
 */
	Simulation(Rocket*);
/** 
 *  @fn     virtual ~Simulation()
 *  @brief  Simlulation Destructor
 *
 */
	virtual ~Simulation();

	//memento pattern
/**
 *  @fn     SimulationBackup* makeBackup()
 *  @brief  makeBackup will create a snapshot of the state of Simulation and Store it as a memento on a
 *			stack in the SimulationBackupStore class as part of the memento design pattern.
 *
 *  @return SimulationBackup*, SimulationBackup pointer.
 */
	SimulationBackup* makeBackup();
/** 
 *  @fn     void restore(SimulationBackup*)
 *  @brief  restore gets the snapshot that was stored in SimulationBackupStore and restores the state
 *			of the Simulation class to a backup made previously as part of the memento design pattern.
 *
 *  @param[in] backup, a SimulationBackup pointer.
 *  @return void
 */
	void restore(SimulationBackup*);
/**
 *  @fn     Destination* getTripDestination()
 *  @brief  getTripDestination returns the destination of the rocket.
 *
 *  @return Destination* , a Destination pointer
 */
	Destination* getTripDestination();
/** 
 *  @fn     setTripDestination(Destination*)
 *  @brief  setTripDestination sets the destination of the Rocket.
 *
 *	@param[in] D, a Destination pointer
 *  @return void
 */
	void setTripDestination(Destination*);
/** 
 *  @fn     getRocket()
 *  @brief  getRocket returns the Rocket in the Simulation class.
 *
 *  @return Rocket* , a Rocket pointer
 */
	Rocket* getRocket();
/**
 *  @fn     void setRocket(Rocket*)
 *  @brief  setRocket sets the Rocket that will be used in the Simulation class.
 *
 *  @param[in] R, a Rocket pointer
 *  @return void
 */
	void setRocket(Rocket*);

	//command pattern
/**
 *  @fn     void Build()
 *  @brief  Build will call the Build Command and be sent to a receiver for execution
 *
 *  @return void
 */
	void Build();
/**
 *  @fn     void DestinationCommand()
 *  @brief  DestinationCommand will call the Destinaiton Command and be sent to a receiver for execution
 *
 *  @return void
 */
	void DestinationCommand();
/**
 *  @fn     void Launch()
 *  @brief  Launch will call the Launch Command and be sent to a receiver for execution
 *
 *  @return void
 */
	void Launch();
/**
 *  @fn     void Interrupt()
 *  @brief  Interrupt will call the Interrupt Command and be sent to a receiver for execution
 *
 *  @return void
 */
	void Interrupt();
/**
 *  @fn     void nextStage()
 *  @brief  nextStage will call the nextStage Command and be sent to a receiver for execution
 *
 *  @return void
 */
	void nextStage();

/** 
 *  @fn     void setBuild(Command*)
 *  @brief  setBuild sets the buildcommand that will be called for execution.
 *
 *  @param[in] c, a Command pointer
 *  @return void
 */
	void setBuild(Command*);
/** 
 *  @fn     void setBuild(Command*)
 *  @brief  setBuild sets the buildcommand that will be called for execution.
 *
 *  @param[in] c, a Command pointer
 *  @return void
 */
	void setDestination(Command*);
/** 
 *  @fn     void setLaunch(Command*)
 *  @brief  setLaunch sets the launchcommand that will be called for execution.
 *
 *  @param[in] c, a Command pointer
 *  @return void
 */
	void setLaunch(Command*);
/** 
 *  @fn     void setInterrupt(Command*)
 *  @brief  setInterrupt sets the interruptcommand that will be called for execution.
 *
 *  @param[in] c, a Command pointer
 *  @return void
 */
	void setInterrupt(Command*);
/** 
 *  @fn     void setnextStage(Command*)
 *  @brief  setnextStage sets the nextstagecommand that will be called for execution.
 *
 *  @param[in] c, a Command pointer
 *  @return void
 */
	void setnextStage(Command*);



};

#endif
