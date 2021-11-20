#ifndef SATELLITECOLLECTION_H
#define SATELLITECOLLECTION_H
#include "SatelliteIterator.h"
#include <vector>
class SatelliteCollection
{
protected:
public:
     

    SatelliteCollection(/* args */);
    virtual void addList(StarlinkOrbitingSatellite*)=0;
    virtual vector<StarlinkOrbitingSatellite*> getVector()=0;
    virtual SatelliteIterator* createIterator()=0;
    ~SatelliteCollection();
};
SatelliteCollection::SatelliteCollection(/* args */)
{
}  


SatelliteCollection::~SatelliteCollection()
{
}


#endif