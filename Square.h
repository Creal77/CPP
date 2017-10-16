//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_SQUARE_H
#define CPPLECTURES_SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
    Square();

    Square(int x, int y, int side);

    ~Square();

    void print() const;

protected:
    int side_;

};


#endif //CPPLECTURES_SQUARE_H
