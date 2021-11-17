#include "Satellite.h"
#include "SatelliteIterator.h"
#include "StarlinkCommunication.h"
#include "StarlinkGroundUsers.h"
#include "StarlinkOrbitingSatellite.h"
#include "ConcreteSatelliteIterator.h"

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
    SatelliteIterator* list=satellites->createIterator();
    cout<<"adding the satellites to the list\n";
    for(int i=0;i<10;i++)
    {
       satellites->addList(clones[i]); 
    }

    
    while(list->current()!=nullptr)
    {
        cout<<"Satellite:"<<list->current()->getid()<<endl;
        list->nextSat();
    }
    





    return 0;
}