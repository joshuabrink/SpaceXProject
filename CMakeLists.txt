cmake_minimum_required(VERSION 3.20)
project(SpaceXProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SpaceXProject
        CoreBuilder.cpp
        CoreBuilder.h
        EngineBuilder.cpp
        EngineBuilder.h
        RocketCompositeStage.cpp
        RocketCompositeStage.h
        StageBuilder.cpp
        StageBuilder.h Core.cpp Core.h)
