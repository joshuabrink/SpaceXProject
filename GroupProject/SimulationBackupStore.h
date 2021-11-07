#ifndef SIMULATIONBACKUPSTORE_H
#define SIMULATIONBACKUPSTORE_H

#include "SimulationBackup.h"

class SimulationBackupStore {
private:
	SimulationBackup* memento;
public:
	SimulationBackupStore();
	~SimulationBackupStore();
	SimulationBackup* getMemento();
	void setMemento(SimulationBackup*);

};

#endif
