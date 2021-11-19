#ifndef SATELLITECOLLECTION_H
#define SATELLITECOLLECTION_H
#include "SatelliteIterator.h"
#include <vector>
class SatelliteCollection
{
protected:
   typedef SatelliteIterator<StarlinkOrbitingSatellite*> satiterator;
public:
     

    SatelliteCollection(/* args */);
    virtual void addList(StarlinkOrbitingSatellite*)=0;

    ~SatelliteCollection();
};
SatelliteCollection::SatelliteCollection(/* args */)
{
}
SatelliteCollection::~SatelliteCollection()
{
}


#endif