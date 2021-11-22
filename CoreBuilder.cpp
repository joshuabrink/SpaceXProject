//
// Created by Leonardo on 2021/11/07.
//

/**
 * @author Leonardo Wessels u17229457
 */

/**
 * @fn CoreBuilder, default constructor for CoreBuilder
 */

#include "CoreBuilder.h"
CoreBuilder::CoreBuilder()
{
    coreArray = nullptr;
    coreFactory = new Core;
    arrSize = 0;
}

/**
 * @fn ~CoreBuilder delete builder;
 */

CoreBuilder::~CoreBuilder()
{
    resetBuilder();

    delete [] coreArray;
}

/**
 * @param stageNumber The stage of the rocket for which we would like to create the product
 * @param rocketName The name of the rocket to generate the correct core for
 */

void CoreBuilder::buildCores(int stageNumber, string rocketName)
{
    // check to see if the cores are instantiated if not then instantiate them
    resetBuilder();
    if(stageNumber == 1)
    {
        //if we already have the coresArray we need to reset it so delete the old
        if(rocketName == "falcon9")
        {
            coreArray = new Core*[1];
            coreArray[0] = coreFactory->getCore();
            arrSize = 1;
        }
        else
        {
            coreArray = new Core*[3];
            for (int i = 0; i < 3; ++i)
            {
                coreArray[i] = coreFactory->getCore();
            }
            arrSize = 3;
        }
    }
    else if(stageNumber == 2)
    {
        if(rocketName == "falcon9")
        {
            arrSize = 0;
            coreArray = nullptr;
        }
        else
        {
            arrSize = 0;
            coreArray = nullptr;
        }
    }
}

/**
 * @param stageNumber The stage of the rocket for which we would like to create the product
 * @param rocketName The name of the rocket to generate the correct core for
 */

void CoreBuilder::buildEngines(int stageNumber, string rocketName)
{
    cout << "This shouldn't be called with this object EngineBuilder.cpp, this should be engine creation only" << endl;
}

/**
 *
 * @return product array of core objects
 */

Core** CoreBuilder::getResult()
{
    return coreArray;
}

/**
 * @fn resetBuilder() this function resets the core array
 */

void CoreBuilder::resetBuilder()
{
    arrSize = 0;

    coreArray = nullptr;
}
