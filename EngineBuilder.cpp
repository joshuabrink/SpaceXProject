//
// Created by Leonardo on 2021/11/07.
//
#include "EngineBuilder.h"

/**
 *
 */

EngineBuilder::~EngineBuilder()
{
    if(engineArray)
    {
        for (Engine* e : engineArray)
        {
            delete e;
        }
    }
    delete [] engineArray;
}

/**
 *
 * @param stageNumber The stage of the rocket for which we would like to create the product
 * @param rocketName The name of the rocket to generate the correct core for
 */
void EngineBuilder::buildEngines(int stageNumber, string rocketName)
{
    // check to see if the cores are instantiated if not then instantiate them
    if(engineArray)
    {
        for (Engine* e: engineArray)
        {
            delete e;
        }
    }
    if(stageNumber == 1)
    {
        //if we already have the coresArray we need to reset it so delete the old
        if(rocketName == "falcon9")
        {
            engineArray = new Engine*[9];
            for (int i = 0; i < 9; ++i)
            {
                engineArray = new Engine();
            }
        }
        else
        {
            engineArray = new Engine*[27];
            for (int i = 0; i < 27; ++i)
            {
                engineArray = new Engine();
            }
        }
    }
    else
    {
        if(rocketName == "falcon9")
        {
            engineArray = new Engine*[1];
            engineArray[0] = new Engine("Vacuum");
        }
        else
        {
            engineArray = new Engine*[1];
            engineArray[0] = new Engine("Vacuum");
        }
    }
}

/**
 * @param stageNumber The stage of the rocket for which we would like to create the product
 * @param rocketName The name of the rocket to generate the correct core for
 */

void EngineBuilder::buildCores(int stageNumber, string rocketName)
{
    cout << "This shouldn't be called with this object EngineBuilder.cpp, this should be engine creation only" << endl;
}

/**
 *
 * @return product array of engine objects
 */

Engine** EngineBuilder::getResult()
{
    return engineArray;
}