//
// Created by Jason on 2021/11/16.
//

#ifndef COS214_PROJECT_ROCKETLEAF_H
#define COS214_PROJECT_ROCKETLEAF_H


#include "RocketStage.h"

class RocketLeaf: public RocketStage {
public:
    RocketLeaf(CoreBuilder *cb, EngineBuilder *eb);

    virtual ~RocketLeaf();

    virtual void makeFalcon9Stage1();

    virtual void makeFalcon9Stage2();

    virtual void makeFalconHeavyStage1();

    virtual void makeFalconHeavyStage2();

    int getNumCores(){return numCores;};
    int getNumEngines(){return numEngines;};
    Core** getCores(){return cores;};
    Engine** getEngines(){return engines;};
};


#endif //COS214_PROJECT_ROCKETLEAF_H
