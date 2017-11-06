//
// Created by Enzo MARIONI on 16/10/2017.
//

#include <iostream>
#include "Motorcycle.h"
#include "MotorVehicle.h"

Motorcycle::Motorcycle(const std::string &model) : MotorVehicle(model,13) {}

void Motorcycle::changeFrontWheel() const {
    std::cout << "Change front wheel" << std::endl;
}

void Motorcycle::changeBackWheel() const {
    std::cout << "Change back wheel" << std::endl;
}