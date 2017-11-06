//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_MOTORCYCLE_H
#define CPPLECTURES_MOTORCYCLE_H

#include "TwoWheelVehicle.h"
#include "MotorVehicle.h"

class Motorcycle : public MotorVehicle, public TwoWheelVehicle {
public :
    Motorcycle(const std::string& model);
    virtual void changeFrontWheel() const override;
    virtual void changeBackWheel() const override;
};


#endif //CPPLECTURES_MOTORCYCLE_H
