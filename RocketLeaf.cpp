//
// Created by Jason on 2021/11/16.
//

#include "RocketLeaf.h"

RocketLeaf::RocketLeaf(CoreBuilder *cb, EngineBuilder *eb) : RocketStage(cb, eb) {}

RocketLeaf::~RocketLeaf() {

}

void RocketLeaf::makeFalcon9Stage1()
{
    cb->buildCores(0,"falcon9");
    cores = cb->getResult();
    eb->buildEngines(0, "falcon9");
    engines = eb->getResult();
}

void RocketLeaf::makeFalcon9Stage2()
{
    cb->buildCores(1,"falcon9");
    cores = cb->getResult();
    eb->buildEngines(1, "falcon9");
    engines = eb->getResult();
}

void RocketLeaf::makeFalconHeavyStage1()
{
    cb->buildCores(0,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(0, "falconHeavy");
    engines = eb->getResult();
}

void RocketLeaf::makeFalconHeavyStage2()
{
    cb->buildCores(1,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(1, "falconHeavy");
    engines = eb->getResult();
}
