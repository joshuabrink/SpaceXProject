//
// Created by Leonardo on 2021/11/08.
//

#include "RocketCompositeStage.h"

void RocketCompositeStage::makeFalcon9Stage1()
{
    cb->buildEngines(0,"falcon9");
    cores = cb->getResult();
    eb->buildEngines(0, "falcon9");
    engines = eb->getResult();
}

void RocketCompositeStage::makeFalcon9Stage2()
{
    cb->buildEngines(1,"falcon9");
    cores = cb->getResult();
    eb->buildEngines(1, "falcon9");
    engines = eb->getResult();
}

void RocketCompositeStage::makeFalconHeavyStage1()
{
    cb->buildEngines(0,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(0, "falconHeavy");
    engines = eb->getResult();
}

void RocketCompositeStage::makeFalconHeavyStage2()
{
    cb->buildEngines(1,"falconHeavy");
    cores = cb->getResult();
    eb->buildEngines(1, "falconHeavy");
    engines = eb->getResult();
}

