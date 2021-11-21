#include <iostream>
#include "EngineBuilder.h"
#include "CoreBuilder.h"
#include "RocketLeaf.h"
#include "CompositeStage.h"
#include "ConcretePayloadFactory.h"
#include "ConcreteRocketFactory.h"
#include "ConcreteSpaceCraftFactory.h"

#include "VacuumMerlinEngine.h"
#include "MerlinEngine.h"

#include "TransportEntities.h"

#include <vector>

using namespace std;

void createFactories() {
    PayloadFactory* SatelliteFact = new SatellitesFactory;
    PayloadFactory* SuppliesFact = new SuppliesFactory;

    RocketFactory* Falcon9Fact = new Falcon9Factory;
    RocketFactory* FalconHeavyFact = new FalconHeavyFactory;

    SpaceCraftFactory* DragonFact = new DragonFactory;
    SpaceCraftFactory* CrewDragonFact = new CrewDragonFactory;


    Payload** satellites = new Payload * [60];
    Payload** supplies = new Payload * [3];

    for (int i = 0; i < 60; i++)
    {
        satellites[i] = SatelliteFact->createPayload("Starlink Satelite", 300000000);
    }


    supplies[0] = SuppliesFact->createPayload("Water supply", 10000);
    supplies[1] = SuppliesFact->createPayload("Food supply", 50000);
    supplies[2] = SuppliesFact->createPayload("Oxygen supply", 200000);


    //Rocket** rockets = new Rocket * [4];

    //rockets[0] = Falcon9Fact->createRocket(3000000);
    //rockets[1] = Falcon9Fact->createRocket(3000000);
    //rockets[2] = FalconHeavyFact->createRocket(5000000);
    //rockets[3] = FalconHeavyFact->createRocket(5000000);


    SpaceCraft** spaceCraft = new SpaceCraft * [2];
    spaceCraft[0] = DragonFact->createSpaceCraft(5000000, 400);
    spaceCraft[1] = CrewDragonFact->createSpaceCraft(8000000, 10);
}


void createTransportEntities() {
    TransportEntities** crew = new TransportEntities * [5];
    TransportEntities** cargo = new TransportEntities * [3];

    crew[0] = new Crew("Susan", "Electrical Engineer");
    crew[1] = new Crew("John", "Mission Specialist 1");
    crew[2] = new Crew("Vector", "Mission Specialist 2");
    crew[3] = new Crew("Kjell", "Spacecraft Commander");
    crew[4] = new Crew("Michael", "Pilot");

    cargo[0] = new Cargo("Food");
    cargo[1] = new Cargo("Oxygen");
    cargo[2] = new Cargo("Tools");
}

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
        cout << engines[i]->getCost() << endl;
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


    if(e != nullptr)
    {
        for (int i = 0; i < rl->getNumEngines(); ++i)
        {
            cout << e[i]->getCost() << endl;
        }
    }

    if(c != nullptr)
    {
        for (int i = 0; i < rl->getNumCores(); ++i)
        {
            cout << c[i]->getName() << endl;
        }
    }
}

int main()
{

   /* cout << "Creating factories:" << endl;
    createFactories();
    cout << endl;
    cout << "Creating Entities:" << endl;
    createTransportEntities();
    cout << endl;

    printHeading("CREATING BUILDERS");



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

    printBuilderInfo(stageArr[1]);

    RocketStage* temp;
    CompositeStage* f9 = new CompositeStage(stageArr[0]);
    f9->addRocketStage(stageArr[1]);
    CompositeStage* fHeavy = new CompositeStage(stageArr[2]);
    fHeavy->addRocketStage(stageArr[3]);

    printHeading("Testing Leaf Stages");

    printSubHeading("F9");
    printBuilderInfo(f9->getVal());
    temp = f9->getNext();
    printBuilderInfo((RocketLeaf*)temp);
    printSubHeading("FHeavy");
    temp = fHeavy->getNext();
    printBuilderInfo((RocketLeaf*)temp);
    printBuilderInfo(fHeavy->getVal());

    delete fHeavy;
    delete f9;
    delete eb;
    delete cb;*/

   EngineBuilder* eb = new EngineBuilder();
   CoreBuilder* cb = new CoreBuilder();
   Core** cores;
   Engine** engines;

   RocketLeaf* rl = new RocketLeaf(cb,eb);
   RocketLeaf* rl2 = new RocketLeaf(cb,eb);
   CompositeStage* cs = new CompositeStage(rl);
   cs->addRocketStage(rl2);
   cs->getVal()->makeFalconHeavyStage1();
   cs->getNext()->makeFalconHeavyStage2();


   /* printSubHeading("FalconHeavyS1");

    cout << cs->getVal()->getNumEngines() << endl;
    cout << cs->getVal()->getNumCores() << endl;

    printSubHeading("FalconHeavyS2");

    cout << cs->getNext()->getNumEngines() << endl;
    cout << cs->getNext()->getNumCores() << endl;


    CompositeStage* temp = new CompositeStage(cs);

    printSubHeading("FalconHeavyS1Copy");

    cout << temp->getVal()->getNumEngines() << endl;
    cout << temp->getVal()->getNumCores() << endl;

    printSubHeading("FalconHeavyS2Copy");

    cout << temp->getNext()->getNumEngines() << endl;
    cout << temp->getNext()->getNumCores() << endl;*/



    return 0;
}


