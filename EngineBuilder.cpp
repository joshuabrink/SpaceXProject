//
// Created by Leonardo on 2021/11/07.
//
#include "EngineBuilder.h"

/**
 * @fn EngineBuilder() default constructor for engine
 */

EngineBuilder::EngineBuilder()
{
    engineArray = nullptr;
    arrSize = 0;
}

/**
 * @author Leonardo Wessels u17229457
 */

EngineBuilder::~EngineBuilder()
{
    resetBuilder();
    delete [] engineArray;
}

/**
 * @param stageNumber The stage of the rocket for which we would like to create the product
 * @param rocketName The name of the rocket to generate the correct core for
 */
void EngineBuilder::buildEngines(int stageNumber, string rocketName)
{
    // check to see if the cores are instantiated if not then instantiate them
    resetBuilder();
    if(stageNumber == 1)
    {
        //if we already have the coresArray we need to reset it so delete the old
        if(rocketName == "falcon9")
        {
            engineArray = new Engine*[9];
            for (int i = 0; i < 9; ++i)
            {
                engineArray[i] = new MerlinEngine(0.0);
            }
            arrSize = 9;
            return;
        }
        else
        {
            engineArray = new Engine*[27];
            for (int i = 0; i < 27; ++i)
            {
                engineArray[i] = new MerlinEngine();
            }
            arrSize = 27;
            return;
        }
    }
    else
    {
        if(rocketName == "falcon9")
        {
            engineArray = new Engine*[1];
            engineArray[0] = new VacuumMerlinEngine();
            arrSize = 1;
            return;
        }
        else
        {
            engineArray = new Engine*[1];
            engineArray[0] = new VacuumMerlinEngine();
            arrSize = 1;
            return;
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

/**
 * @fn this function resets the engine array
 */

void EngineBuilder::resetBuilder()
{
    engineArray = nullptr;

    arrSize = 0;
}