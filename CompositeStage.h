//
// Created by Jason on 2021/11/16.
//

#ifndef COS214_PROJECT_COMPOSITESTAGE_H
#define COS214_PROJECT_COMPOSITESTAGE_H
#include "RocketStage.h"

/** @file CompositeStage.h
 * @class CompositeStage
 * @brief CompositeStage is a Composite participant in the Composite design pattern.
 * CompositeStage contain children that are either composites or leaves.
 * @author Jason Antalis
 * @bug No known bugs. */

class CompositeStage: public RocketStage {
private:
    RocketStage* next;
public:
    /**
     * @fn     CompositeStage(CoreBuilder *cb, EngineBuilder *eb)
     * @brief  The CompositeStage Constructor which will set the values of a
     * CoreBuilder and EngineBuilder inside RocketStage, additionally it also
     * inherits from RocketStage
     * @param[in] CoreBuilder*, a CoreBuilder pointer
     * @param[in] EngineBuilder*, a EngineBuilder pointer
    */
    CompositeStage(CoreBuilder *cb, EngineBuilder *eb);
    /**
     * @fn     virtual ~CompositeStage()
     * @brief  The Destructor for CompositeStage
    */
    virtual ~CompositeStage();
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
    /**
     * @fn     virtual void addRocketStage(RocketStage* n)
     * @brief  Implements the function addRocketStage which will set the value of the n
     * to the next value within this class.
     * @param[in] RocketStage*, a RocketStage pointer
     * @return void.
    */
    virtual void addRocketStage(RocketStage* n);
    /**
     * @fn     RocketStage *getNext() const
     * @brief  Returns a pointer to the current next variable
     * @return RocketStage*.
    */
    RocketStage *getNext() const;
    /**
     * @fn     void setNext(RocketStage *next)
     * @brief  Sets the value of the next value in this class
     * @param[in] RocketStage*, a RocketStage pointer
     * @return void.
    */
    void setNext(RocketStage *next);
};


#endif //COS214_PROJECT_COMPOSITESTAGE_H
