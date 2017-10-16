//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_CIRCLE_H_H
#define CPPLECTURES_CIRCLE_H_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle();

    Circle(int x, int y, int radius);

    ~Circle();

    void print() const;

protected:
    int radius_;
};


#endif //CPPLECTURES_CIRCLE_H_H
