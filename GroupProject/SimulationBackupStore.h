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
	SimulationBackupStore();
	virtual ~SimulationBackupStore();

	SimulationBackup* getMemento();
	void setMemento(SimulationBackup*);

};

#endif
