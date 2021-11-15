//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_ENGINEBUILDER_H
#define SPACEXPROJECT_ENGINEBUILDER_H

#include "StageBuilder.h"

/**
 * @class EngineBuilder
 * Concrete Builder to create engines based on product type
 */

class EngineBuilder : public  StageBuilder
{
public:
    Engine** engineArray;

    EngineBuilder(){engineArray = nullptr;}
    ~EngineBuilder();
    void buildCores(int stageNumber, string rocketName) override;
    void buildEngines(int stageNumber, string rocketName) override;
    Engine** getResult();
};


#endif //SPACEXPROJECT_ENGINEBUILDER_H
