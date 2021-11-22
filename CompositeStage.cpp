//
// Created by Jason on 2021/11/16.
//

#include "CompositeStage.h"

void CompositeStage::makeFalcon9Stage1()
{
    cb->buildEngines(0,"falcon9");
    cores = cb->getResult();
    numCores = cb->getNumCores();
    eb->buildEngines(0, "falcon9");
    engines = eb->getResult();
    numEngines = eb->getNumEngines();
}

void CompositeStage::makeFalcon9Stage2()
{
    cb->buildEngines(1,"falcon9");
    cores = cb->getResult();
    numCores = cb->getNumCores();
    eb->buildEngines(1, "falcon9");
    engines = eb->getResult();
    numEngines = eb->getNumEngines();
}

void CompositeStage::makeFalconHeavyStage1()
{
    cb->buildEngines(0,"falconHeavy");
    cores = cb->getResult();
    numCores = cb->getNumCores();
    eb->buildEngines(0, "falconHeavy");
    engines = eb->getResult();
    numEngines = eb->getNumEngines();
}

void CompositeStage::makeFalconHeavyStage2()
{
    cb->buildEngines(1,"falconHeavy");
    cores = cb->getResult();
    numCores = cb->getNumCores();
    eb->buildEngines(1, "falconHeavy");
    engines = eb->getResult();
    numEngines = eb->getNumEngines();
}

CompositeStage::CompositeStage(CoreBuilder *cb, EngineBuilder *eb) : RocketStage(cb, eb)
{
    next = nullptr;
    val = nullptr;
}

CompositeStage::~CompositeStage()
{
    next = nullptr;
    val = nullptr;
}

void CompositeStage::addRocketStage(RocketLeaf *n)
{
    next = n;
}

CompositeStage::CompositeStage(CompositeStage* cs)
{
    if(cs->val)
    {
        val = new RocketLeaf(cs->val);
    }
    if(cs->next)
    {
        next = new RocketLeaf(cs->next);
    }
}
