
#ifndef SATTELITE_H
#define SATTELITE_H
#include "CommuncationNode.h"
class Satellite : public CommuncationNode
{
public:
    Satellite(const int id) : CommuncationNode(id){};
    ~Satellite(){};
     bool operator==(const CommuncationNode& rhs) const {
         return id == rhs.id;
     };
};



#endif