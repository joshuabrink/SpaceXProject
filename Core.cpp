//
// Created by Leonardo on 2021/11/16.
//

#include "Core.h"

Core::Core()
{

}

/**
 * @fn factory method for generating cores
 * @return a new core object
 */

Core* Core::getCore()
{
    return new Core;
}