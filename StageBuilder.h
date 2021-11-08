//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_STAGEBUILDER_H
#define SPACEXPROJECT_STAGEBUILDER_H
#include <string>


class StageBuilder
{
public:
    virtual void buildEngines(int stageNum, string rocketName) = 0;
    virtual void buildCores(int stageNum, string rocketName) = 0;
};


#endif //SPACEXPROJECT_STAGEBUILDER_H
