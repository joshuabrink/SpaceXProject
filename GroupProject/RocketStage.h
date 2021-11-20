//
// Created by Jason on 2021/11/16.
//

#ifndef COS214_PROJECT_ROCKETSTAGE_H
#define COS214_PROJECT_ROCKETSTAGE_H

#include "StageBuilder.h"
#include "CoreBuilder.h"
#include "EngineBuilder.h"


/**
 * @class RocketCompositeStage
 * Serves as the leaf class for the composite design
 * and has arrays of the concrete objects used for the class
 */

class RocketStage {
public:
    Core** cores;
    int numCores;
    Engine** engines;
    int numEngines;
    CoreBuilder* cb = new CoreBuilder();
    EngineBuilder* eb = new EngineBuilder();

    RocketStage(CoreBuilder *cb, EngineBuilder *eb);
    RocketStage(){};

    virtual void makeFalcon9Stage1() = 0;
    virtual void makeFalcon9Stage2() = 0;
    virtual void makeFalconHeavyStage1() = 0;
    virtual void makeFalconHeavyStage2() = 0;

    virtual ~RocketStage();

    virtual void setCoreBuilder(CoreBuilder *cb);

    virtual void setEngineBuilder(EngineBuilder *eb);

};


#endif //COS214_PROJECT_ROCKETSTAGE_H
