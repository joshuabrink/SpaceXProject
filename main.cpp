#include <iostream>
#include "EngineBuilder.h"
#include "CoreBuilder.h"

/**
 * @fn prints heading for testing phase
 * @param s name of the component you would like a heading for
 */

void printHeading(string s)
{
    string tabs = "-------------------------------\n";
    cout << tabs;
    cout << s << endl;
    cout << tabs;
}

/**
 * @fn provides a way to check values of components, prints the names of the cores and engines
 * @param rocketType falcon9/falconHeavy
 * @param stageNum stage of rocket, 1/2
 * @param eb builder to build engines
 * @param cb builder to build cores
 * @param engines engine array that will contain the new engines
 * @param cores core array that will contain the new cores
 */

//can see if it's working from the output
void printBuilderInfo(string rocketType, int stageNum, EngineBuilder* eb, CoreBuilder* cb, Engine** engines, Core** cores )
{
    eb->buildEngines(stageNum,rocketType);
    cb->buildCores(stageNum,rocketType);

    engines = eb->getResult();
    cores = cb->getResult();
    for (int i = 0; i < eb->getNumEngines(); ++i)
    {
        engines[i]->getName();
    }
    for (int i = 0; i < cb->getNumCores(); ++i)
    {
        cores[i]->getName();
    }
}

int main()
{
    printHeading("CREATING BUILDERS");

    EngineBuilder* eb = new EngineBuilder();
    CoreBuilder* cb = new CoreBuilder();
    Core** cores;
    Engine** engines;

    printHeading("Falcon9 - Stage 1 Test\n");

    printBuilderInfo("falcon9", 1, eb, cb, engines, cores);

    printHeading("Falcon9 - Stage 2 Test\n");

    printBuilderInfo("falcon9", 2, eb, cb, engines, cores);

    printHeading("FalconHeavy - Stage 1 Test\n");

    printBuilderInfo("falconHeavy", 1, eb, cb, engines, cores);

    printHeading("FalconHeavy - Stage 2 Test\n");

    printBuilderInfo("falconHeavy", 2, eb, cb, engines, cores);


}


