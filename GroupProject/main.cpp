#include "../StarlinkQueue.h"
#include "../StarlinkOrbitingSatellite.h"
#include "../StarlinkGroundUser.h"
#include "../ConcreteSatelliteIterator.h"
#include "../SatelliteCollection.h"
#include "../SatelliteVector.h"
// #include "TECargoCollection.h"
// #include "TransportEntityCrew.h"
// #include "TransportEntityCargo.h"
// #include "SpaceCraftCrewDragon.h"
// #include "SpaceCraftDragon.h"
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{

   
    StarlinkQueue *que = new StarlinkQueue();
    SatelliteCollection* list= new SatelliteVector();
    StarlinkCommunication *s0 = new StarlinkOrbitingSatellite();
    StarlinkCommunication *s1 = new StarlinkOrbitingSatellite();
    StarlinkCommunication *g0 = new StarlinkGroundUser();
    StarlinkCommunication *s2 = s1->clone();

    
    // StarlinkOrbitingSatellite s4 = StarlinkOrbitingSatellite();
    que->add(s0);
    que->add(s1);
    que->add(g0);
    que->add(s2);
    SatelliteIterator* iterate= list->createIterator();
    list->addList(static_cast<StarlinkOrbitingSatellite*>(s0));
    list->addList(static_cast<StarlinkOrbitingSatellite*>(s1));
    list->addList(static_cast<StarlinkOrbitingSatellite*>(s2));
    cout<<"Testing the satellite iterator";
    while(iterate->current()!=iterate->lastSat())
    {
        cout<<"Satellite:"<<iterate->current()->getId()<<endl;
        iterate->nextSat();
    }
        cout<<"Satellite:"<<iterate->current()->getId()<<endl;


    // que->add(&s4);

    CommuncationNetwork network = CommuncationNetwork(que);

    // broadcast all
    cout << "Ground control communicates to all nodes" << endl;
    g0->communicate("Rocket reached low orbit");
    cout << endl;

    // StarlinkOrbitingSatellite to ground com
    cout << "StarlinkOrbitingSatellite communicates with ground control" << endl;
    s1->communicate("Send communcation packet", 0);
    cout << endl;

    // all to StarlinkOrbitingSatellite 1
    cout << "All nodes communicates with StarlinkOrbitingSatellite 1" << endl;
    StarlinkCollection::iterator it = que->begin();
    while (!(it == que->end()))
    {
        (*it)->communicate("Send communcation packet", 1);
        cout << endl;
        ++it;
    }
    (*it)->communicate("Send communcation packet", 1);

    delete que;
    delete s0;
    delete s1;
    delete s2;
    delete g0;
    


    
    // TransportEntity* crew = new TransportEntityCrew();

    // TransportEntityCollection* trans = new TECargoCollection();
    // trans->add(crew);

    // SpaceCraft* crewCraft = new SpaceCraftDragon();
    // crewCraft->addEntities(trans);

    return 0;
}


// int main()
// {

//     cout<<"create a new orbiting Satellite\n";
//     Satellite* satellites=new StarlinkOrbitingSatellite();
//      //prototypes clone method//
//     Satellite* clones[10];
//     cout<<"create orbiting Satellite clones using the prototype\n";
//     for(int i=0;i<10;i++)
//     {
//         cout<<"Clone:"<<i<<endl;
//         clones[i]=satellites->clone();
//     }
//     cout<<"Finished creating the clones\n";
//     cout<<"create the concrete iterator\n";
//     cout<<"adding the satellites to the list\n";
//     satellites->addList(satellites);
//     for(int i=0;i<10;i++)
//     {
//         cout<<"added clone:"<<i+1<<endl;
//        satellites->addList(clones[i]); 
//     }

//     SatelliteIterator* list=satellites->createIterator();
//     for(int i=0;i<=10;i++)
//     {
//         cout<<"Satellite:"<<list->current()->getid()<<endl;
//         list->nextSat();
//     }

//     cout<<"First Satellite id:"<<list->firstSat()->getid()<<endl;
    
// //delete satellites;
// //delete list;





//     return 0;

// }