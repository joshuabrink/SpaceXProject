//
// Created by Jason on 2021/11/16.
//

#ifndef COS214_PROJECT_COMPOSITESTAGE_H
#define COS214_PROJECT_COMPOSITESTAGE_H
#include "RocketStage.h"

class CompositeStage: public RocketStage {
private:
    RocketStage* next;
public:
    CompositeStage(CoreBuilder *cb, EngineBuilder *eb);

    virtual ~CompositeStage();

    virtual void makeFalcon9Stage1();

    virtual void makeFalcon9Stage2();

    virtual void makeFalconHeavyStage1();

    virtual void makeFalconHeavyStage2();

    virtual void addRocketStage(RocketStage* n);
};


#endif //COS214_PROJECT_COMPOSITESTAGE_H
