#include "SimulationBackupStore.h"

SimulationBackupStore::SimulationBackupStore()
{
}

SimulationBackupStore::~SimulationBackupStore()
{

}

SimulationBackup* SimulationBackupStore::getMemento(int i)
{
	if (mementoStack.empty()) {
		return nullptr;
	}else{
		return mementoStack[i];
	}
}

void SimulationBackupStore::setMemento(SimulationBackup* m)
{
	mementoStack.push_back(m);
}
