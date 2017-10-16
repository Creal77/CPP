//
// Created by Enzo MARIONI on 16/10/2017.
//

#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string &model) : MotorVehicle(model,13) {}

void Motorcycle::changeFrontWheel() {
    std::cout << "Change front wheel" << std::endl;
}

void Motorcycle::changeBackWheel() {
    std::cout << "Change back wheel" << std::endl;
}