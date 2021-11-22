//
// Created by Jason on 2021/11/16.
//

#ifndef COS214_PROJECT_COMPOSITESTAGE_H
#define COS214_PROJECT_COMPOSITESTAGE_H
#include "RocketStage.h"
#include "RocketLeaf.h"

class CompositeStage: public RocketStage {
private:
    RocketLeaf* next;
    RocketLeaf* val; //current leaf
public:
    CompositeStage(CoreBuilder *cb, EngineBuilder *eb);
    CompositeStage(RocketLeaf* rl){val = rl;next = nullptr;};
    CompositeStage(CompositeStage* cs);

    virtual ~CompositeStage();

    virtual void makeFalcon9Stage1();

    virtual void makeFalcon9Stage2();

    virtual void makeFalconHeavyStage1();

    virtual void makeFalconHeavyStage2();

    virtual void addRocketStage(RocketLeaf* n);

    RocketLeaf* getVal(){return val;};

    RocketLeaf* getNext(){return next;}; //will always return second stage
};


#endif //COS214_PROJECT_COMPOSITESTAGE_H
