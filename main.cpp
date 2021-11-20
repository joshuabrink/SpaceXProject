#include <iostream>
#include "EngineBuilder.h"
#include "CoreBuilder.h"
#include "RocketLeaf.h"
#include "CompositeStage.h"

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

void printSubHeading(string s)
{
    string tabs = "-------------------------------\n";
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
        cout << engines[i]->getName() << endl;
    }
    for (int i = 0; i < cb->getNumCores(); ++i)
    {
        cout << cores[i]->getName() << endl;
    }
}

void printBuilderInfo(RocketLeaf* rl)
{
    Engine** e = rl->getEngines();
    Core** c = rl->getCores();

    for (int i = 0; i < rl->getNumEngines(); ++i)
    {
        cout << e[i]->getName() << endl;
    }
    for (int i = 0; i < rl->getNumCores(); ++i)
    {
        cout << c[i]->getName() << endl;
    }
}

int main()
{
    printHeading("CREATING BUILDERS");

    EngineBuilder* eb = new EngineBuilder();
    CoreBuilder* cb = new CoreBuilder();
    Core** cores;
    Engine** engines;

    printHeading("Falcon9 - Stage 1 Test");

    printBuilderInfo("falcon9", 1, eb, cb, engines, cores);

    printHeading("Falcon9 - Stage 2 Test");

    printBuilderInfo("falcon9", 2, eb, cb, engines, cores);

    printHeading("FalconHeavy - Stage 1 Test");

    printBuilderInfo("falconHeavy", 1, eb, cb, engines, cores);

    printHeading("FalconHeavy - Stage 2 Test");

    printBuilderInfo("falconHeavy", 2, eb, cb, engines, cores);

    printHeading("CreatingLeaves");

    RocketLeaf* stageArr[4];

    for (int i = 0; i < 4; ++i)
    {
        stageArr[i] = new RocketLeaf(cb, eb);
    }

    printHeading("Creating and displaying all stages");

    for (int i = 0; i < 4; ++i)
    {
        switch (i)
        {
            case 0:
                printSubHeading("F9S1");
                stageArr[i]->makeFalcon9Stage1();
                printBuilderInfo(stageArr[i]);
                break;
            case 1:
                printSubHeading("F9S2");
                stageArr[i]->makeFalcon9Stage2();
                printBuilderInfo(stageArr[i]);
                break;
            case 2:
                printSubHeading("FHS1");
                stageArr[i]->makeFalconHeavyStage1();
                printBuilderInfo(stageArr[i]);
                break;
            case 3:
                printSubHeading("FHS2");
                stageArr[i]->makeFalconHeavyStage2();
                printBuilderInfo(stageArr[i]);
                break;
        }
    }

    printHeading("Creating and connecting composite stages");

    CompositeStage* f9 = new CompositeStage(stageArr[0]);
    f9->addRocketStage(stageArr[1]);
    CompositeStage* fHeavy = new CompositeStage(stageArr[2]);
    fHeavy->addRocketStage(stageArr[3]);

    printHeading("Testing Leaf Stages");

    printSubHeading("F9");
    printBuilderInfo(f9->getVal());
    printSubHeading("FHeavy");
    printBuilderInfo(fHeavy->getVal());

    delete fHeavy;
    delete f9;
    delete eb;
    delete cb;
}


