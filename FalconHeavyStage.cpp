//
// Created by Leonardo on 2021/11/07.
//

#include "FalconHeavyStage.h"
FalconHeavyStage::~FalconHeavyStage()
{
    for (Engine e: enginesArray)
    {
        delete e;
    }

    delete [] enginesArray;

    for (RocketCoreProduct rcp: coresArray)
    {
        delete rcp;
    }

    delete [] coresArray;
}

void FalconHeavyStage::buildCores(int stageNumber)
{
    // check to see if the cores are instantiated if not then instantiate them
    if(stageNumber == 1)
    {
        //if we already have the coresArray we need to reset it so delete the old
        if(coresArray)
        {
            for (RocketCoreProduct* r: coresArray)
            {
                delete r;
            }
            delete [] coresArray;
        }

        coresArray = new RocketCoreProduct*[3];
    }
    else if(stageNumber == 2)
    {
        //second stage doesn't have cores as far as I can tell
        if(coresArray)
        {
            for (RocketCoreProduct* r: coresArray)
            {
                delete r;
            }
            delete [] coresArray;
        }
    }
}

void FalconHeavyStage::buildEngines()
{
    // check to see if the cores are instantiated if not then instantiate them
    if(stageNumber == 1)
    {
        //if we already have the coresArray we need to reset it so delete the old
        if(enginesArray)
        {
            for (RocketCoreProduct* r: coresArray)
            {
                delete r;
            }
            delete [] enginesArray;
        }

        coresArray = new RocketCoreProduct*[3];
    }
    else if(stageNumber == 2)
    {
        //second stage doesn't have cores as far as I can tell
        if(enginesArray)
        {
            for (RocketCoreProduct* r: coresArray)
            {
                delete r;
            }
            delete [] enginesArray;
        }
    }
}