//
// Created by Jason on 2021/11/16.
//

#include "RocketStage.h"



RocketStage::~RocketStage() {

}

RocketStage::RocketStage(CoreBuilder *cb, EngineBuilder *eb) : cb(cb), eb(eb) {}

void RocketStage::setCoreBuilder(CoreBuilder *cb) {
    RocketStage::cb = cb;
}

void RocketStage::setEngineBuilder(EngineBuilder *eb) {
    RocketStage::eb = eb;
}

