
#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include "../TransportEntityCollection.h"
class SpaceCraft
{
private:
    
public:
    SpaceCraft(/* args */) {}
    virtual void addEntities(TransportEntityCollection*)=0;
    ~SpaceCraft() {}
};

#endif