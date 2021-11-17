//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_ENGINEBUILDER_H
#define SPACEXPROJECT_ENGINEBUILDER_H

#include "StageBuilder.h"
#include "Engine.h"

/**
 * @class EngineBuilder
 * Concrete Builder to create engines based on product type
 */

class EngineBuilder : public  StageBuilder
{
public:

    EngineBuilder();
    ~EngineBuilder();
    void buildCores(int stageNumber, string rocketName) override;
    void buildEngines(int stageNumber, string rocketName) override;
    Engine** getResult();
private:
    int arrSize;
    Engine** engineArray;
};


#endif //SPACEXPROJECT_ENGINEBUILDER_H
