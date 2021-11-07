//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_FALCONHEAVYSTAGE_H
#define SPACEXPROJECT_FALCONHEAVYSTAGE_H

#include "StageBuilder.h"

class RocketCoreProduct;
class Engine;

class FalconHeavyStage : public StageBuilder
{
public:
    RocketCoreProduct** coresArray;
    Engine** enginesArray;

    FalconHeavyStage(){coresArray = nullptr;enginesArray = nullptr;};
    ~FalconHeavyStage();
    void buildCores(int stageNumber) override;
    void buildEngines(int stageNumber) override;
};


#endif //SPACEXPROJECT_FALCONHEAVYSTAGE_H
