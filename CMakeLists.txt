cmake_minimum_required(VERSION 3.20)
project(SpaceXProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SpaceXProject
        CompositeStage.cpp
        CompositeStage.h
        ConcretePayloadFactory.cpp
        ConcretePayloadFactory.h
        ConcreteRocketFactory.cpp
        ConcreteRocketFactory.h
        ConcreteSpaceCraftFactory.cpp
        ConcreteSpaceCraftFactory.h
        Core.cpp
        Core.h
        CoreBuilder.cpp
        CoreBuilder.h
        Engine.cpp
        Engine.h
        EngineBuilder.cpp
        EngineBuilder.h
        main.cpp
        MerlinEngine.h
        ModifiedMerlinEngine.h
        Payload.cpp
        Payload.h
        PayloadFactory.h
        RocketFactory.h
        RocketLeaf.cpp
        RocketLeaf.h
        RocketStage.cpp
        RocketStage.h
        SpaceCraft.cpp
        SpaceCraft.h
        SpaceCraftFactory.h
        StageBuilder.cpp
        StageBuilder.h
        TransportEntities.cpp
        TransportEntities.h
        VacuumMerlinEngine.h Rocket.cpp Rocket.h)
