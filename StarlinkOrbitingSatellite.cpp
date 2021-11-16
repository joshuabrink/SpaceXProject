#include "StarlinkOrbitingSatellite.h"

StarlinkOrbitingSatellite::StarlinkOrbitingSatellite(/* args */)
{
}

void  StarlinkOrbitingSatellite::Communicate(string message,string communication)
{
    if(communication=="radio waves")
    cout<<"Satellite is communicating with a ground user: "<<message<<endl;
    else{
            cout<<"Satellite is communicating with another Satellite: "<<message<<endl;
    }
}
Satellite* StarlinkOrbitingSatellite::clone()
{
    return new StarlinkOrbitingSatellite();
} 
SatelliteIterator* StarlinkOrbitingSatellite::createIterator()
{
    return new ConcreteSatelliteIterator();
}
StarlinkOrbitingSatellite::~StarlinkOrbitingSatellite()
{
}
void StarlinkOrbitingSatellite::addList(Satellite* s)
{
    if(nullptr==nullptr)
    {

    }

}
