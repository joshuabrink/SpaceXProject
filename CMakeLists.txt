cmake_minimum_required(VERSION 3.20)
project(SpaceXProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SpaceXProject
        CompositeStage.cpp
        CompositeStage.h
        Core.cpp
        Core.h
        CoreBuilder.cpp
        CoreBuilder.h
        EngineBuilder.cpp
        EngineBuilder.h
        RocketLeaf.cpp
        RocketLeaf.h
        RocketStage.cpp
        RocketStage.h
        StageBuilder.cpp
        StageBuilder.h)
