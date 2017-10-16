//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_MOTORCYCLE_H
#define CPPLECTURES_MOTORCYCLE_H


class Motorcycle : public Motorcycle, public TwoWheelVehicle {
    Motorcycle(const std::string& model);
    virtual void changeFrontWheel() const override;
    virtual void changeBackWheel() const override;
};


#endif //CPPLECTURES_MOTORCYCLE_H
