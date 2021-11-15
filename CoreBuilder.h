//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_COREBUILDER_H
#define SPACEXPROJECT_COREBUILDER_H

#include "StageBuilder.h"

class RocketCoreProduct;
class Engine;

class CoreBuilder : public StageBuilder
{
public:
    Cores** coreArray;

    CoreBuilder(){coreArray = nullptr;};
    ~CoreBuilder();
    void buildCores(int stageNumber, string rocketName) override;
    void buildEngines(int stageNumber, string rocketName) override;
    Cores** getResult();
};


#endif //SPACEXPROJECT_COREBUILDER_H