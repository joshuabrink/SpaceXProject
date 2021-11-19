#ifndef SATELLITEVECTOR_H
#define SATELLITEVECTOR_H
#include "SatelliteCollection.h"

class SatelliteVector: public SatelliteCollection
{
private:
    /* data */
public:
    SatelliteVector(/* args */);
    void addList(StarlinkOrbitingSatellite*);
    ~SatelliteVector();
};

SatelliteVector::SatelliteVector(/* args */)
{
}

SatelliteVector::~SatelliteVector()
{
}



#endif