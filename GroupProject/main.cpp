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

#include "TransportEntity.h"

#include "Build.h"
#include "Interrupt.h"
#include "Command.h"
#include "Launch.h"
#include "SetDestination.h"
#include "NextStage.h"
//#include "Simulation.h"
#include "Destination.h"
#include "ISS.h"
#include "LowOrbit.h"
#include "Earth.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "SimulationBackupStore.h"
#include "SimulationBackup.h"

#include <vector>
//#include "StarlinkQueue.h"
#include "StarlinkOrbitingSatellite.h"
#include "StarlinkGroundUser.h"
#include "ConcreteSatelliteIterator.h"
#include "SatelliteCollection.h"
#include "SatelliteVector.h"

#include "testSimulation.h"

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
    TransportEntity** crew = new TransportEntity * [5];
    TransportEntity** cargo = new TransportEntity * [3];

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
void printBuilderInfo(string rocketType, int stageNum, EngineBuilder* eb, CoreBuilder* cb, Engine** engines, Core** cores)
{
    eb->buildEngines(stageNum, rocketType);
    cb->buildCores(stageNum, rocketType);

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


    if (e != nullptr)
    {
        for (int i = 0; i < rl->getNumEngines(); ++i)
        {
            cout << e[i]->getCost() << endl;
        }
    }

    if (c != nullptr)
    {
        for (int i = 0; i < rl->getNumCores(); ++i)
        {
            cout << c[i]->getName() << endl;
        }
    }
}

void TestSimulation1() {

    //   StarlinkQueue *que = new StarlinkQueue();
    //SatelliteCollection* list= new SatelliteVector();
    //StarlinkCommunication *s0 = new StarlinkOrbitingSatellite();
    //StarlinkCommunication *s1 = new StarlinkOrbitingSatellite();
    //StarlinkCommunication *g0 = new StarlinkGroundUser();
    //StarlinkCommunication *s2 = s1->clone();
    //cout<<"create the rocket\n";
    //Rocket* rocket= new Falcon9(3300);
    //cout<<"create the rocket\n";


    //
    //// StarlinkOrbitingSatellite s4 = StarlinkOrbitingSatellite();
    //que->add(s0);
    //que->add(s1);
    //que->add(g0);
    //que->add(s2);
    //    cout<<"create the rocket\n";

    //SatelliteIterator* iterate= list->createIterator();
    //    cout<<"create list\n";

    //list->addList(static_cast<StarlinkOrbitingSatellite*>(s0));
    //    cout<<"create the rocket\n";

    //list->addList(static_cast<StarlinkOrbitingSatellite*>(s1));
    //list->addList(static_cast<StarlinkOrbitingSatellite*>(s2));
    //cout<<"Testing the satellite iterator";
    //while(iterate->current()!=iterate->lastSat())
    //{
    //    cout<<"Satellite:"<<iterate->current()->getId()<<endl;
    //    iterate->nextSat();
    //}
    //    cout<<"Satellite:"<<iterate->current()->getId()<<endl;


    //// que->add(&s4);

    //CommuncationNetwork network = CommuncationNetwork(que);

    //// broadcast all
    //cout << "Ground control communicates to all nodes" << endl;
    //g0->communicate("Rocket reached low orbit");
    //cout << endl;

    //// StarlinkOrbitingSatellite to ground com
    //cout << "StarlinkOrbitingSatellite communicates with ground control" << endl;
    //s1->communicate("Send communcation packet", 0);
    //cout << endl;

    //// all to StarlinkOrbitingSatellite 1
    //cout << "All nodes communicates with StarlinkOrbitingSatellite 1" << endl;
    //StarlinkCollection::iterator it = que->begin();
    //while (!(it == que->end()))
    //{
    //    (*it)->communicate("Send communcation packet", 1);
    //    cout << endl;
    //    ++it;
    //}
    //(*it)->communicate("Send communcation packet", 1);

    cout << "-----------------CREATING ROCKET FACTORIES----------------" << endl<<endl;

    cout << "-----------------CREATING FALCON9FACORY----------------" << endl;
    RocketFactory* Falcon9Fact = new Falcon9Factory;
    cout << "-----------------FALCON9 SUCCESSFUL----------------" << endl;

    cout << "-----------------CREATING FALCON HEAVY FACORY----------------" << endl;
    RocketFactory* FalconHeavyFact = new FalconHeavyFactory;
    cout << "-----------------FALCON HEAVY SUCCESSFUL----------------" << endl;
    
    cout << "-----------------CREATING ROCKETS----------------" << endl << endl;
    Rocket** rockets = new Rocket * [4];

    rockets[0] = Falcon9Fact->createRocket(3000000);
   // rockets[1] = Falcon9Fact->createRocket(3000000);
    rockets[2] = FalconHeavyFact->createRocket(5000000);
    rockets[3] = FalconHeavyFact->createRocket(5000000);

    cout << "-----------------CREATING ROCKETS SUCCESSFUL----------------" << endl;




    //cout << "creating Satallites" << endl;
    //SatelliteCollection* list = new SatelliteVector();

    // StarlinkCommunication* s0 = new StarlinkOrbitingSatellite();
    // StarlinkCommunication* s1 = new StarlinkOrbitingSatellite();

    //list->addList(static_cast<StarlinkOrbitingSatellite*>(s0));
    //list->addList(static_cast<StarlinkOrbitingSatellite*>(s1));

   /* rockets[0]->addSatellites(list);*/
    cout << "-----------------CREATING ROCKET STAGES----------------" << endl << endl;

    EngineBuilder* eb = new EngineBuilder();
    CoreBuilder* cb = new CoreBuilder();
    Core** cores;
    Engine** engines;

    RocketLeaf* stageArr[4];

    for (int i = 0; i < 4; ++i)
    {
        stageArr[i] = new RocketLeaf(cb, eb);
    }

    for (int i = 0; i < 4; ++i)
    {
        switch (i)
        {
        case 0:
            stageArr[i]->makeFalcon9Stage1();
            break;
        case 1:
            stageArr[i]->makeFalcon9Stage2();
            break;
        case 2:
            stageArr[i]->makeFalconHeavyStage1();
            break;
        case 3:
            stageArr[i]->makeFalconHeavyStage2();
            break;
        }
    }
    CompositeStage* f9 = new CompositeStage(stageArr[0]);
    f9->addRocketStage(stageArr[1]);
    /*  CompositeStage* fHeavy = new CompositeStage(stageArr[2]);
      fHeavy->addRocketStage(stageArr[3]);*/
    rockets[0]->addStage(f9);
    cout << "-----------------CREATING ROCKET STAGES SUCCESSFUL----------------" << endl;

    cout << "-----------------CREATING DESTINATIONS----------------" << endl << endl;

    Destination* destE = new Earth();
    Destination* destI = new ISS();
    Destination* destL = new LowOrbit();


    cout << "-----------------CREATING COMMANDS----------------" << endl << endl;
    

    //creating commands 
    Command* launch = new Launch(rockets[0]);
    Command* destination = new SetDestination(rockets[0], destE);
    Command* abort = new Interrupt(rockets[0]);
    Command* build = new Build(Falcon9Fact, 300000000);
    Command* stage = new NextStage(rockets[0]);


    launch->execute();
    destination->execute();
    launch->execute();
    abort->execute();
    launch->execute();
    stage->execute();
    rockets[1] = build->executeBuild();

    Command* launch2 = new Launch(rockets[1]);
    launch2->execute();
    /*
    Simulation* sim = new Simulation(rockets[0]);

    //memento
    SimulationBackupStore* caretaker = new SimulationBackupStore();
    cout << "Creating backup" << endl;
    caretaker->setMemento(sim->makeBackup());
    abort->execute();
    sim->restore(caretaker->getMemento());
    launch->execute();
    destination->execute();
    */
}

void testSimulationYes(){
    testSimulation *sim = new testSimulation();
    sim->start();


}

int main()
{
    //TestSimulation1();
    testSimulationYes();
    /*cout << "Creating factories:" << endl;
    createFactories();
    cout << endl;
    cout << "Creating Entities:" << endl;
    createTransportEntities();
    cout << endl;

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

    return 0;
}


