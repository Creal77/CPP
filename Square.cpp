//
// Created by Enzo MARIONI on 16/10/2017.
//

#include <iostream>
#include "Square.h"

Square::Square() {}

Square::Square(int x, int y, int side) : Shape(x, y), side_(side) {}

Square::~Square() {}

void Square::print() const {
    std::cout << "I am a square located at (" << x_ << ", "
              << y_ << ") with a side of " << side_ << std::endl;
}