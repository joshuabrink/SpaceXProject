//
// Created by Leonardo on 2021/11/07.
//

#include "CoreBuilder.h"
CoreBuilder::~CoreBuilder()
{
    if(coreArray)
    {
        for (RocketCoreProduct rcp: coresArray)
        {
            delete rcp;
        }
    }

    delete [] coreArray;
}

void CoreBuilder::buildCores(int stageNumber, string rocketName)
{
    // check to see if the cores are instantiated if not then instantiate them
    if(coreArray)
    {
        for (Engines* e: engineArray)
        {
            delete e;
        }
    }
    if(stageNumber == 1)
    {
        //if we already have the coresArray we need to reset it so delete the old
        if(rocketName == "falcon9")
        {
            coreArray = new Core*[1];
            coreArray[0] = new Core();
        }
        else
        {
            coreArray = new Core*[3];
            for (int i = 0; i < 3; ++i)
            {
                coreArray = new Core();
            }
        }
    }
    else
    {
        if(rocketName == "falcon9")
        {
            coreArray = nullptr;
        }
        else
        {
            coreArray = nullptr;
        }
    }
}

void CoreBuilder::buildEngines(int stageNumber)
{
    cout << "This shouldn't be called with this object EngineBuilder.cpp, this should be engine creation only" << endl;
}

Core** CoreBuilder::getResult()
{
    return coreArray;
}
