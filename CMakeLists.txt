cmake_minimum_required(VERSION 3.20)
project(SpaceXProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(GroupProject)

add_executable(SpaceXProject
        GroupProject/actualSimulation.h
        GroupProject/testSimulation.cpp
        GroupProject/testSimulation.h)
