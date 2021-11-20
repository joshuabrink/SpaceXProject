/** @file SimulationBackupStore.h
 *  @class SimulationBackupStore
 *
 *  @brief SimulationBackupStore is the caretaker participant in the Memento design pattern
 *
 *  SimulationBackupStore implements the structure where Memento objects will be stored.
 *
 *  @author Joshua Young
 *  @bug No known bugs.
 */

#ifndef SIMULATIONBACKUPSTORE_H
#define SIMULATIONBACKUPSTORE_H

#include "SimulationBackup.h"
#include <stack>

using namespace std;

class SimulationBackupStore {
private:
	stack<SimulationBackup*> mementoStack;
	//SimulationBackup* memento;
public:

/**
 *  @fn     SimulationBackupStore()
 *  @brief  SimulationBackupStore constructor.
 */
	SimulationBackupStore();
	/**
 *  @fn     virtual ~SimulationBackupStore()
 *  @brief  SimulationBackupStore Destructor.
 */
	virtual ~SimulationBackupStore();
/**
 *  @fn     SimulationBackup* getMemento()
 *  @brief  getMemento will return the memento object at the top of the stack to be
 *			reinstantiated.
 *
 *  @return SimulationBackup* , a pointer to the SimulationBakcup.
 */
	SimulationBackup* getMemento();
/**
 *  @fn     void setMemento(SimulationBackup*);
 *  @brief  setMemento will add SimulationBackup* objects to the top of the stack.
 *
 *  @param[in] SimulationBackup*, a SimulationBackup pointer.
 *  @return void.
 */
	void setMemento(SimulationBackup*);

};

#endif
