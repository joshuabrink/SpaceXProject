#include "Satellite.h"
#include "SatelliteIterator.h"
#include "StarlinkCommunication.h"
#include "StarlinkGroundUsers.h"
#include "StarlinkOrbitingSatellite.h"
#include "ConcreteSatelliteIterator.h"
#include "ComNodeQueue.h"
#include "ComNodeQueueIterator.h"
#include <iostream>
using namespace std;

int main()
{

    cout<<"create a new orbiting Satellite\n";
    Satellite* satellites=new StarlinkOrbitingSatellite();
     //prototypes clone method//
    Satellite* clones[10];
    cout<<"create orbiting Satellite clones using the prototype\n";
    for(int i=0;i<10;i++)
    {
        cout<<"Clone:"<<i<<endl;
        clones[i]=satellites->clone();
    }
    cout<<"Finished creating the clones\n";
    cout<<"create the concrete iterator\n";
    cout<<"adding the satellites to the list\n";
    satellites->addList(satellites);
    for(int i=0;i<10;i++)
    {
        cout<<"added clone:"<<i+1<<endl;
       satellites->addList(clones[i]); 
    }

    SatelliteIterator* list=satellites->createIterator();
    for(int i=0;i<=10;i++)
    {
        cout<<"Satellite:"<<list->current()->getid()<<endl;
        list->nextSat();
    }

    cout<<"First Satellite id:"<<list->firstSat()->getid()<<endl;
    
//delete satellites;
//delete list;





    return 0;

}