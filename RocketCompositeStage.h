//
// Created by Leonardo on 2021/11/08.
//

#ifndef SPACEXPROJECT_ROCKETCOMPOSITESTAGE_H
#define SPACEXPROJECT_ROCKETCOMPOSITESTAGE_H
#include "StageBuilder.h"
#include "CoreBuilder.h"
#include "EngineBuilder.h"
#include "Core.h"

/**
 * @class RocketCompositeStage
 * Serves as the leaf class for the composite design
 * and has arrays of the concrete objects used for the class
 */

class RocketCompositeStage
{
public:
    Core** cores;
    Engine** engines;
    CoreBuilder* cb = new CoreBuilder();
    EngineBuilder* eb = new EngineBuilder();
    RocketCompositeStage();
    void setCoreBuilder();
    void setEngineBuilder();
    void makeFalcon9Stage1();
    void makeFalcon9Stage2();
    void makeFalconHeavyStage1();
    void makeFalconHeavyStage2();
};


#endif //SPACEXPROJECT_ROCKETCOMPOSITESTAGE_H
