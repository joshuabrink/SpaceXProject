#include "SimulationBackupStore.h"

SimulationBackupStore::SimulationBackupStore():memento(0)
{
}

SimulationBackupStore::~SimulationBackupStore()
{
}

SimulationBackup* SimulationBackupStore::getMemento()
{
	return memento;
}

void SimulationBackupStore::setMemento(SimulationBackup* m)
{
	memento = m;
}
