//
// Created by Enzo MARIONI on 16/10/2017.
//

#include "MotorVehicle.h"

MotorVehicle::MotorVehicle(const std::string& model, int fuel) : Vehicle(model),engine(Engine(fuel)) {}

bool MotorVehicle::start() {
    return engine.start();
}

void MotorVehicle::stop() const {
    engine.stop();
}

void MotorVehicle::cruise(int fuel) {
    engine.use(fuel);
}

void MotorVehicle::fill(int fuel) {
    engine.fill(fuel);
}