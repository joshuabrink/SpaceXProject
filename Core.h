//
// Created by Leonardo on 2021/11/16.
//

#ifndef SPACEXPROJECT_CORE_H
#define SPACEXPROJECT_CORE_H
#include <string>

using namespace std;

class Core
{
public:
    Core();
    Core* getCore();
    string getName(){return name;};
private:
    string name = "core";
};


#endif //SPACEXPROJECT_CORE_H
