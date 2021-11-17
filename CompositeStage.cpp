//
// Created by Jason on 2021/11/16.
//

#include "CompositeStage.h"

void CompositeStage::makeFalcon9Stage1()
{
    cb->buildEngines(0,"falcon9");
    cores = cb->getResult();
    eb->buildEngines(0, "falcon9");
    engines = eb->getResult();
}

void CompositeStage::makeFalcon9Stage2()
{
    cb->buildEngines(1,"falcon9");
    cores = cb->getResult();
    eb->buildEngines(1, "falcon9");
    engines = eb->getResult();
}

void CompositeStage::makeFalconHeavyStage1()
{
    cb->buildEngines(0,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(0, "falconHeavy");
    engines = eb->getResult();
}

void CompositeStage::makeFalconHeavyStage2()
{
    cb->buildEngines(1,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(1, "falconHeavy");
    engines = eb->getResult();
}

CompositeStage::CompositeStage(CoreBuilder *cb, EngineBuilder *eb) : RocketStage(cb, eb) {}

CompositeStage::~CompositeStage() {

}

void CompositeStage::addRocketStage(RocketStage *n) {
    next = n;
}
