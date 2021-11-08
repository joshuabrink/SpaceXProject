//
// Created by Leonardo on 2021/11/08.
//

#ifndef SPACEXPROJECT_ROCKETCOMPOSITESTAGE_H
#define SPACEXPROJECT_ROCKETCOMPOSITESTAGE_H
#include "StageBuilder.h"

class RocketCompositeStage
{
public:
    Cores** cores;
    Engines** engines;
    StageBuilder* sb = new StageBuilder;
    RocketCompositeStage(StageBuilder* stageB){sb = stageB};
    void makeFalcon9Stage1();
    void makeFalcon9Stage2();
    void makeFalconHeavyStage1();
    void makeFalconHeavyStage2();
};


#endif //SPACEXPROJECT_ROCKETCOMPOSITESTAGE_H
