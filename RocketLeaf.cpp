//
// Created by Jason on 2021/11/16.
//

#include "RocketLeaf.h"

RocketLeaf::RocketLeaf(CoreBuilder *cb, EngineBuilder *eb) : RocketStage(cb, eb)
{
    cores = nullptr;
    engines = nullptr;
}

RocketLeaf::~RocketLeaf()
{

}

RocketLeaf::RocketLeaf(RocketLeaf *rl)
{
    if(rl->engines)
    {
        numEngines = rl->getNumEngines();
        engines = new Engine*[numEngines];
        for (int i = 0; i < numEngines; ++i)
        {
             if(dynamic_cast<MerlinEngine*>(rl->engines[i]))
            {
                engines[i] = new MerlinEngine(*(dynamic_cast<MerlinEngine*>(rl->engines[i])));
            }
            else
            {
                engines[i] = new VacuumMerlinEngine(*(dynamic_cast<VacuumMerlinEngine*>(rl->engines[i])));
            }
        }
    }
    else
    {
        engines = nullptr;
    }
    if(rl->cores)
    {
        numCores = rl->getNumCores();
        cout << numCores;
        cores = new Core*[numCores];

        for (int i = 0; i < numCores; ++i)
        {
            cores[i] = new Core(rl->cores[i]);
        }

    }
    else
    {
        cores = nullptr;
    }
}

void RocketLeaf::makeFalcon9Stage1()
{
    cb->buildCores(1,"falcon9");
    cores = cb->getResult();
    eb->buildEngines(1, "falcon9");
    engines = eb->getResult();
    numCores = cb->getNumCores();
    numEngines = eb->getNumEngines();
}

void RocketLeaf::makeFalcon9Stage2()
{
    cb->buildCores(2,"falcon9");
    cores = cb->getResult();
    numCores = cb->getNumCores();
    eb->buildEngines(2, "falcon9");
    engines = eb->getResult();
    numEngines = eb->getNumEngines();
}

void RocketLeaf::makeFalconHeavyStage1()
{
    this->cb->buildCores(1,"falconHeavy");
    this->cores = cb->getResult();
    this->eb->buildEngines(1, "falconHeavy");
    this->engines = eb->getResult();
    this->numCores = cb->getNumCores();
    this->numEngines = eb->getNumEngines();
}

void RocketLeaf::makeFalconHeavyStage2()
{
    this->cb->buildCores(2,"falconHeavy");
    this->cores = cb->getResult();
    this->eb->buildEngines(2, "falconHeavy");
    this->engines = eb->getResult();
    this->numCores = cb->getNumCores();
    this->numEngines = eb->getNumEngines();
}
