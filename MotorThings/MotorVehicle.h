//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_MOTORVEHICLE_H
#define CPPLECTURES_MOTORVEHICLE_H


#include <string>
#include "Vehicle.h"
#include "Engine.h"

class MotorVehicle : public Vehicle {
public:
    MotorVehicle(const std::string& model, int fuel);
    virtual bool start() override;
    virtual void stop() const override;
    void cruise(int fuel);
    void fill(int fuel);

protected:
    Engine engine;
};


#endif //CPPLECTURES_MOTORVEHICLE_H
