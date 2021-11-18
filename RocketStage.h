//
// Created by Jason on 2021/11/16.
//

#ifndef COS214_PROJECT_ROCKETSTAGE_H
#define COS214_PROJECT_ROCKETSTAGE_H

#include "StageBuilder.h"
#include "CoreBuilder.h"
#include "EngineBuilder.h"

/** @file RocketStage.h
 * @class RocketStage
 * @brief RocketStage is a Component participant in the Composite design pattern
 * RocketStage provides the interface with which the client interacts with.
 * @author Jason Antalis
 * @bug No known bugs. */

class RocketStage {
public:
    Core** cores;
    Engine** engines;
    CoreBuilder* cb = new CoreBuilder();
    EngineBuilder* eb = new EngineBuilder();
    /**
     * @fn     RocketStage(CoreBuilder *cb, EngineBuilder *eb)
     * @brief  The RocketStage Constructor which will set the values of a
     * CoreBuilder and EngineBuilder within this class
     * @param[in] CoreBuilder*, a CoreBuilder pointer
     * @param[in] EngineBuilder*, a EngineBuilder pointer
    */
    RocketStage(CoreBuilder *cb, EngineBuilder *eb);
    /**
     * @fn     virtual void makeFalcon9Stage1()
     * @brief  This is a pure virtual function which will be implemented
     * by its children
     * @return void.
    */
    virtual void makeFalcon9Stage1() = 0;
    /**
     * @fn     virtual void makeFalcon9Stage2()
     * @brief  This is a pure virtual function which will be implemented
     * by its children
     * @return void.
    */
    virtual void makeFalcon9Stage2() = 0;
    /**
     * @fn     virtual void makeFalconHeavyStage1()
     * @brief  This is a pure virtual function which will be implemented
     * by its children
     * @return void.
    */
    virtual void makeFalconHeavyStage1() = 0;
    /**
     * @fn     virtual void makeFalconHeavyStage2()
     * @brief  This is a pure virtual function which will be implemented
     * by its children
     * @return void.
    */
    virtual void makeFalconHeavyStage2() = 0;
    /**
     * @fn     virtual ~RocketStage()
     * @brief  The Destructor for RocketStage
    */
    virtual ~RocketStage();
    /**
     * @fn     setCoreBuilder(CoreBuilder *cb)
     * @brief  sets the value of cb to this->cb
     * @param[in] CoreBuilder*, a CoreBuilder pointer
    */
    virtual void setCoreBuilder(CoreBuilder *cb);
    /**
     * @fn     setEngineBuilder(EngineBuilder *eb)
     * @brief  sets the value of cb to this->eb
     * @param[in] EngineBuilder*, a EngineBuilder pointer
    */
    virtual void setEngineBuilder(EngineBuilder *eb);

};


#endif //COS214_PROJECT_ROCKETSTAGE_H
