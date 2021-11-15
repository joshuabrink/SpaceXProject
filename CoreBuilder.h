//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_COREBUILDER_H
#define SPACEXPROJECT_COREBUILDER_H

#include "StageBuilder.h"

/**
 * @class CoreBuilder
 * Concrete Builder to create cores based on product type
 */

class CoreBuilder : public StageBuilder
{
public:
    Core** coreArray;

    CoreBuilder(){coreArray = nullptr;};
    ~CoreBuilder();
    void buildCores(int stageNumber, string rocketName) override;
    void buildEngines(int stageNumber, string rocketName) override;
    Core** getResult();
};


#endif //SPACEXPROJECT_COREBUILDER_H
