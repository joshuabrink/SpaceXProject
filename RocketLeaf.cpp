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
    if(rl->cores)
    {
        numCores = rl->getNumCores();
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
    if(rl->engines)
    {
        numEngines = rl->getNumEngines();
        engines = new Engine*[numEngines];
        for (int i = 0; i < numEngines; ++i)
        {
            engines[i] = new Engine(rl->engines[i]);
        }
    }
    else
    {
        engines = nullptr;
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
    eb->buildEngines(2, "falcon9");
    engines = eb->getResult();
    numCores = cb->getNumCores();
    numEngines = eb->getNumEngines();
}

void RocketLeaf::makeFalconHeavyStage1()
{
    cb->buildCores(1,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(1, "falconHeavy");
    engines = eb->getResult();
    numCores = cb->getNumCores();
    numEngines = eb->getNumEngines();
}

void RocketLeaf::makeFalconHeavyStage2()
{
    cb->buildCores(2,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(2, "falconHeavy");
    engines = eb->getResult();
    numCores = cb->getNumCores();
    numEngines = eb->getNumEngines();
}
