//
// Created by Enzo MARIONI on 16/10/2017.
//
// TP2

#include <iostream>
#include "Shape.h"
#include "Circle.h"

Circle::Circle() {}

Circle::Circle(int x, int y, int radius) : Shape(x, y), radius_(radius) {}

Circle::~Circle() {}

void Circle::print() const {
    std::cout << "I am a circle located at (" << x_ << ", "
              << y_ << ") with a radius of " << radius_ << std::endl;
}

