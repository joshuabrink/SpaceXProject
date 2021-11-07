//
// Created by Leonardo on 2021/11/07.
//

#ifndef SPACEXPROJECT_STAGEBUILDER_H
#define SPACEXPROJECT_STAGEBUILDER_H
#include <string>


class StageBuilder
{
public:
    virtual void buildEngines() = 0;
    virtual void buildCores() = 0;
};


#endif //SPACEXPROJECT_STAGEBUILDER_H
