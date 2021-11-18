//
// Created by Jason on 2021/11/16.
//

#ifndef COS214_PROJECT_ROCKETLEAF_H
#define COS214_PROJECT_ROCKETLEAF_H

#include "RocketStage.h"

/** @file RocketLeaf.h
 * @class RocketLeaf
 * @brief RocketLeaf is a Leaf participant in the Composite design pattern.
 * RocketLeaf do not have children, define the primitive objects of the composition.
 * @author Jason Antalis
 * @bug No known bugs. */

class RocketLeaf: public RocketStage {
public:
    /**
     * @fn     RocketLeaf(CoreBuilder *cb, EngineBuilder *eb)
     * @brief  The RocketLeaf Constructor which will set the values of a
     * CoreBuilder and EngineBuilder inside RocketStage, additionally it also
     * inherits from RocketStage
     * @param[in] CoreBuilder*, a CoreBuilder pointer
     * @param[in] EngineBuilder*, a EngineBuilder pointer
    */
    RocketLeaf(CoreBuilder *cb, EngineBuilder *eb);
    /**
     * @fn     virtual ~RocketLeaf()
     * @brief  The Destructor for RocketLeaf
    */
    virtual ~RocketLeaf();
    /**
     * @fn     virtual void makeFalcon9Stage1()
     * @brief  Implements the function makeFalcon9Stage1 which will create and set/add values to
     * the cores and engines within RocketStage to the Falcon9 Stage 1 category
     * @return void.
    */
    virtual void makeFalcon9Stage1();
    /**
     * @fn     virtual void makeFalcon9Stage2()
     * @brief  Implements the function makeFalcon9Stage2 which will create and set/add values to
     * the cores and engines within RocketStage to the Falcon9 Stage 2 category
     * @return void.
    */
    virtual void makeFalcon9Stage2();
    /**
     * @fn     virtual void makeFalconHeavyStage1()
     * @brief  Implements the function makeFalconHeavyStage1 which will create and set/add values to
     * the cores and engines within RocketStage to the FalconHeavy Stage 1 category
     * @return void.
    */
    virtual void makeFalconHeavyStage1();
    /**
     * @fn     virtual void makeFalconHeavyStage2()
     * @brief  Implements the function makeFalconHeavyStage2 which will create and set/add values to
     * the cores and engines within RocketStage to the FalconHeavy Stage 2 category
     * @return void.
    */
    virtual void makeFalconHeavyStage2();
};


#endif //COS214_PROJECT_ROCKETLEAF_H
