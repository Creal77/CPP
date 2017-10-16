//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_VEHICLE_H
#define CPPLECTURES_VEHICLE_H


#include <string>

class Vehicle {
public:
    Vehicle(const std::string& model);
    virtual bool start() = 0;
    virtual void stop() const = 0;
};


#endif //CPPLECTURES_VEHICLE_H
