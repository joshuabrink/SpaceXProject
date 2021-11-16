//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_STAGEBUILDER_H
#define SPACEXPROJECT_STAGEBUILDER_H
#include <string>
#include <iostream>
#include "Core.h"

class Engine;

/**
 * @class Stagebuilder
 * this is the abstract builder for the class and provides the abstract classes that will be created to be used as products for the client
 */

using namespace std;

class StageBuilder
{
public:
    virtual void buildEngines(int stageNum, string rocketName) = 0;
    virtual void buildCores(int stageNum, string rocketName) = 0;
};


#endif //SPACEXPROJECT_STAGEBUILDER_H
