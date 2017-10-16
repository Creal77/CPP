//
// Created by Enzo MARIONI on 16/10/2017.
//

#include <iostream>
#include "Engine.h"

Engine::Engine(int fuel) : fuel_(fuel) {}

bool Engine::start() {
    fuel_--;
    if(fuel_==0) {
        return false;
    }
    std::cout << "Engine started with" << fuel_ << "fuel units" << std::endl;
    return true;
}

void Engine::use(int consumed) {
    if(fuel_ > consumed) {
        fuel_ -= consumed;
        std::cout << "Engine uses" << consumed << "fuel unit" << std::endl;
    } else {
        std::cout << "Engine uses" << fuel_ << "fuel unit" << std::endl;
        fuel_ = 0;
    }
}

void Engine::stop() const {
    std::cout << "Stop Engine" << std::endl;
}

void Engine::fill(int fuel) {
    fuel_+=fuel;
    std::cout << "Filled with" << fuel << "fuel units" << std::endl;
}