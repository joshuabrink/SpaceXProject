#ifndef SATELLITEVECTOR_H
#define SATELLITEVECTOR_H
#include "SatelliteCollection.h"
#include "ConcreteSatelliteIterator.h"

class SatelliteVector: public SatelliteCollection
{
private:
    SatelliteIterator* it;
public:
    SatelliteVector(/* args */);
    void addList(StarlinkOrbitingSatellite*);
    SatelliteIterator* createIterator() override;
    ~SatelliteVector();
};

SatelliteVector::SatelliteVector(/* args */)
{
}
void SatelliteVector::addList(StarlinkOrbitingSatellite* sos)
{
    it->addList(sos);
}

SatelliteIterator* SatelliteVector::createIterator()
{
    it= new ConcreteSatelliteIterator();
    return it;
}
  
SatelliteVector::~SatelliteVector()
{
}



#endif