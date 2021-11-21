#ifndef TRANSPORTENTITYCREW_H
#define TRANSPORTENTITYCREW_H
#include "TransportEntity.h"
class TransportEntityCrew : public TransportEntity
{
private:
    
public:
    TransportEntityCrew(/* args */) {}
    ~TransportEntityCrew() {}
    void display(){cout << "Crew Member" << endl;};
};
#endif