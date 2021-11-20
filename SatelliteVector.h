#ifndef SATELLITEVECTOR_H
#define SATELLITEVECTOR_H
#include "SatelliteCollection.h"
#include "ConcreteSatelliteIterator.h"
class SatelliteVector: public SatelliteCollection
{
private:
    vector<StarlinkOrbitingSatellite*> it;
public:
    SatelliteVector(/* args */);
    void addList(StarlinkOrbitingSatellite*);
    vector<StarlinkOrbitingSatellite*> getVector();
    SatelliteIterator* createIterator();
    ~SatelliteVector();
};

SatelliteVector::SatelliteVector(/* args */)
{
}
void SatelliteVector::addList(StarlinkOrbitingSatellite* sos)
{
    it.push_back(sos);
}
vector<StarlinkOrbitingSatellite*> SatelliteVector::getVector()
{
    return it;
}
SatelliteIterator* SatelliteVector::createIterator()
{
    return new ConcreteSatelliteIterator(this);
}
  
SatelliteVector::~SatelliteVector()
{
}



#endif