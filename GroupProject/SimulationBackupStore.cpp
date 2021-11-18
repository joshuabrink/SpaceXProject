#include "SimulationBackupStore.h"

SimulationBackupStore::SimulationBackupStore()
{
}

SimulationBackupStore::~SimulationBackupStore()
{

}

SimulationBackup* SimulationBackupStore::getMemento()
{
	if (mementoStack.empty()) {
		return nullptr;
	}else{
		SimulationBackup* temp= mementoStack.top();
		mementoStack.pop();
	}
}

void SimulationBackupStore::setMemento(SimulationBackup* m)
{
	mementoStack.push(m);
}
